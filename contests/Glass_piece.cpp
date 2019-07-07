#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
#define ll long long

int main()
{
    int S;
    cin>>S;
    int N;
    cin>>N;
    map<pair<pair<int,int>,pair<int,int>>,int> m;
    map<pair<int,int>,int> corner;
    corner.insert({{0,0},0});
    corner.insert({{S,0},0});
    corner.insert({{0,S},0});
    corner.insert({{S,S},0});
    while(N--)
    {
        int i;
        cin>>i;
        pair<int,int> p1,first;
            int n1,n2;
            cin>>n1>>n2;
            p1.first=n1;
            p1.second=n2;
            first=p1;
            i=i-1;
            if(n1==0&&n2==0||n1==0&&n2==S||n1==S&&n2==0||n1==S&&n2==S)
            {
                auto itr = corner.find({n1,n2});
                if(itr!=corner.end())
                {
                    itr->second=itr->second+1;
                }
            }
        while (i--)
        {
            pair<int,int> p2;
            pair<pair<int,int>,pair<int,int>> p3;
            pair<pair<int,int>,pair<int,int>> p4;
           // int n3,n2;
            cin>>n1>>n2;
            if(n1==0&&n2==0||n1==0&&n2==S||n1==S&&n2==0||n1==S&&n2==S)
            {
                 auto itr = corner.find({n1,n2});
                if(itr!=corner.end())
                {
                    itr->second=itr->second+1;
                }
            }
            p2.first=n1;
            p2.second=n2;
            p3.first=p1;
            p3.second=p2;
            p4.first=p2;
            p4.second=p1;
            int flag=0;
            auto itr=m.find(p3);
            if(itr!=m.end())
            {
                flag=1;
                itr->second=itr->second+1;
            }
            if(flag==0)
            {
                auto itr=m.find(p4);
                if(itr!=m.end())
                {
                    flag=1;
                    itr->second=itr->second+1;
                }
            }
            if(flag==0)
            {
                m.insert({p3,1});
            }
            p1=p2;
            
        }
         pair<pair<int,int>,pair<int,int>> p3;
         pair<pair<int,int>,pair<int,int>> p4;
         p3.first=p1;
        p3.second=first;
        p4.first=first;
        p4.second=p1;
        int flag=0;
            auto itr=m.find(p3);
            if(itr!=m.end())
            {
                flag=1;
                itr->second=itr->second+1;
            }
            if(flag==0)
            {
                auto itr=m.find(p4);
                if(itr!=m.end())
                {
                    flag=1;
                    itr->second=itr->second+1;
                }
            }
            if(flag==0)
            {
                m.insert({p3,1});
            }
            
        
    }
map<pair<int,int>,int> result;

    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        // if(itr->second==1)
        // {
        //     //cout<<itr->first.first.first<<" "<<itr->first.first.second<<" "<<itr->first.second.first<<" "<<itr->first.second.second<<endl;
        // }
        int n1,n2,n3,n4;
        int flag=0;
        n1=itr->first.first.first;
        n2=itr->first.first.second;
        if(n1==0&&n2==0||n1==0&&n2==S||n1==S&&n2==0||n1==S&&n2==S)
        {
            n3=itr->first.second.first;
            n4=itr->first.second.second;
            if(n3==0||n3==S||n4==S||n4==0)
            {
               itr->second+=1;
            }
        }
         n1=itr->first.second.first;
            n2=itr->first.second.second;
        if(n1==0&&n2==0||n1==0&&n2==S||n1==S&&n2==0||n1==S&&n2==S)
        {
           
            n3=itr->first.first.first;
          n4=itr->first.first.second;
            if(n3==0||n3==S||n4==S||n4==0)
            {
                itr->second+=1;
            }
        }
       
    }

    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        
        if(itr->second==1)
        {
            auto it=result.find(itr->first.first);
            if(it==result.end())
            {
                result.insert({{itr->first.first.first,itr->first.first.second},1});
                //cout<<itr->first.first.first<<" "<<itr->first.first.second<<"\n";
            }
            auto it1=result.find(itr->first.second);
            if(it1==result.end())
            {
                result.insert({{itr->first.second.first,itr->first.second.second},1});
            }
            
            
            //cout<<itr->first.first.first<<" "<<itr->first.first.second<<" "<<itr->first.second.first<<" "<<itr->first.second.second<<endl;
        }
    }
        for(auto itr=corner.begin();itr!=corner.end();itr++)
        {
            if(itr->second==0)
            {
                result.insert({{itr->first.first,itr->first.second},1});
            }
        }
        for(auto itr=result.begin();itr!=result.end();itr++)
        {
            // if(itr->second==0)
            // {
            //     result.insert({{itr->first.first,itr->first.second},1});
            // }
            cout<<itr->first.first<<" "<<itr->first.second<<endl;
        }
    
}