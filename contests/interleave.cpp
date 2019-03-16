#include<stdio.h>
#include<iostream>
#include<string.h>
#include<unordered_map>
#include<vector>

using namespace std;



int main()
{
    int n;
    cin>>n;
    int k=1;
      unordered_map<int,vector<pair<int,int>>> umap;
    while(n--)
    {
      
        char s[110];
        cin>>s;
        int small=0;
        for(int i=0;i<strlen(s);i++)
        {
            int num=s[i]-'0';
            auto p = make_pair(k,num);
            
            if(num>=small)
            {
                umap[num].push_back(p);
                small=num;
            }
            else
            {
                umap[small].push_back(p);
            }
            
        }
        k++;
  

    }
     for(int i=0;i<=9;i++)
        {
            int n=umap[i].size();
            for(int j=0;j<n;j++)
            {
                cout<<umap[i].at(j).first<<" ";
            }
        }

}
