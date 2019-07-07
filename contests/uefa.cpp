#include<iostream>
#include<unordered_map>

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string t1,t2,s,temp;
       int n1,n2;
        unordered_map<string,pair<int,int>> umap;
        for(int i=0;i<12;i++)
        {
            while(getline(cin,s));
             stringstream ss(s);

             ss>>t1>>n1>>temp>>n2>>t2;
             cout<<t1<<"!!!"<<n1<<"!!!"<<temp<<"!!!"<<n2<<t2<<endl;
             if(n1>n2)
             {
                umap[t1].first=umap[t1].first+3;
                umap[t1].second=n1-n2;
                umap[t2].second=n2-n1;

             }
             else if(n2>n1)
             {
                 umap[t2].first=umap[t2].first+3;
                umap[t1].second=n1-n2;
                umap[t2].second=n2-n1;
             }
             else
             {
                 umap[t2].first=umap[t2].first+1;
                 umap[t1].first=umap[t1].first+1;
             }
             
             

        }
        vector<int> v,v2,v3;
    for(auto i=umap.begin();i!=umap.end();i++)
    {
        v.push_back(i->second.first);
        v2.push_back(i->second.second);
    }
    v3=v;
    sort(v.begin(),v.end(),greater<int>());
    if(v[0]>v[1])
    {
            for(auto i=umap.begin();i!=umap.end();i++)
        {
            if(i->second.first==v[0])
            {
                cout<<i->first<<" ";
            }

        }
         for(auto i=umap.begin();i!=umap.end();i++)
        {
            if(i->second.first==v[1])
            {
                cout<<i->first<<endl;
            }
            
        }
    }
    else if(v[0]==v[1])
    {
        vector<string> s;
        vector<int> z;
        for(auto i=umap.begin();i!=umap.end();i++)
        {
            if(i->second.first==v[1])
            {
                s.push_back(i->first);
                z.push_back(i->second.second);
            }
            sort(z.begin(),z.end(),greater<int>());
            string sss;
            for(int i=0;i<s.size();i++)
            {
                if(umap[s[i]].second==z[0])
                {
                   cout<<s[i]<<" ";
                }
            }
            for(int i=0;i<s.size();i++)
            {
                if(umap[s[i]].second==z[0] && s[i]!=sss)
                {
                    cout<<s[i]<<endl;
                }
            }
        }

    }
    }
    

}