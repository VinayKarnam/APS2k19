#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;
    unordered_map<ll,ll> m;
    while (t--)
    {
        ll n;
        cin>>n;
        ll c[n],h[n],diff[n];
        for(int i=0;i<n;i++)
        cin>>c[i];
        for(int i=0;i<n;i++)
        cin>>h[i];
        memset(diff,0,sizeof(diff));
        for(int i=0;i<n;i++)
        {
            int t1=i-c[i];
            int l=max(0,t1);
            diff[l]+=1;
            int r=i+c[i]+1;
            if(r<n)
            diff[r]-=1;
        }
            // for(int i=0;i<n;i++)
            // cout<<diff[i]<<" ";
         ll prev=0;
        for(int i=0;i<n;i++)
        {
            ll cur=diff[i]+prev;
            auto itr=m.find(cur);
            if(itr!=m.end())
            itr->second+=1;
            else
            {
                m[cur]=1;
            }
            //cout<<cur<<endl;
            prev=cur;
            
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            auto itr=m.find(h[i]);
            if(itr==m.end())
            {
                flag=1;
                break;
            }
            else
            {
                if(itr->second<=0)
                {
                    flag=1;
                    break;
                }
                else
                {
                    itr->second-=1;
                }
                
            }
            
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
    
}
