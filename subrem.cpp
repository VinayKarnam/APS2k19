#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 
  
long long int X;
void dfs_sum(long long int u,long long int parent,long long int totalSum, 
        vector<long long int> edge[],long long int subtree[]) 
{ 
   long long int sum = subtree[u]; 
  
  
    for (int i = 0; i < edge[u].size(); i++) 
    { 
        int v = edge[u][i]; 
        if (v != parent) 
        { 
            dfs_sum(v, u, totalSum, edge, subtree); 
            sum += subtree[v]; 
        } 
    } 

subtree[u] = sum; 
  
  
} 

void maxsum_dfs(long long int u,long long int parent,long long int totalSum, 
        vector<long long int> edge[],long long int subtree[],long long& res)
{
  
    long long int o_res=res;
    long long int sum = subtree[u];
 
    for (int i = 0; i < edge[u].size(); i++) 
    { 
        int v = edge[u][i]; 
        if (v != parent) 
        { 
            maxsum_dfs(v, u, totalSum, edge, subtree,res); 
          
        } 
    }
     
    long long int cur=o_res-sum-X;
    long long int max;
    if(o_res<=cur)
    {
        max=cur;
    }
    else
    {
        max=o_res;
    }

    if(res<max)
    {
        res=max;
    }
    
    
     
}
  

long long int getMinSubtreeSumDifference(long long int vertex[], 
                     long long int edges[][2], long long int N) 
{ 
    long long int totalSum = 0; 
    long long int subtree[N]; 

    for (int i = 0; i < N; i++) 
    { 
        subtree[i] = vertex[i]; 
        totalSum += vertex[i]; 
    } 
 
    vector<long long int> edge[N]; 
    for (int i = 0; i < N - 1; i++) 
    { 
        edge[edges[i][0]-1].push_back(edges[i][1]-1); 
        edge[edges[i][1]-1].push_back(edges[i][0]-1); 
    } 
  

    long long int res=totalSum;
    dfs_sum(0, -1, totalSum, edge, subtree); 
    maxsum_dfs(0,-1,totalSum,edge,subtree,res);
    return res;
     
} 
 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N,x;
        cin>>N>>x;
        X=x;
        long long int vertex[100010],edges[100010][2],temp;
        for(int i=0;i<N;i++)
        {
            cin>>vertex[i];
        }
        for(int i=0;i<N-1;i++)
        {
            cin>>edges[i][0]>>edges[i][1];
        }
        cout << getMinSubtreeSumDifference(vertex, edges, N)<<endl;

    } 
   
  
     
    return 0; 
}