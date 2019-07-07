#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
#define ll long long

vector<int> A;
vector<int> tree(100);
int sum=0;
void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = max(tree[2*node] , tree[2*node+1]);
    }
}



int main()
{
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        A.push_back(t);
    }
   // sort(A.begin(),A.end());
    build(1,0,n-1);
    for(int i=1;i<tree.size();i++)
    {
        cout<<tree[i]<<endl;
    }
    for(int i=0;i<tree.size();i++)
    {
        int t=-1,t1=-1;
        if(2*i<=tree.size())
        {
            t=tree[2*i];
            t1=1;
        }
        if(2*i+1<=tree.size())
        {
            t1=tree[2*i+1];
        }
        
        if(t!=-1)
        {
            sum=sum+(t1*t);
        }
    }
    cout<<sum<<endl;
}