#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=-1,a[200],b[200];
        //cout<<ans<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        for(int i=0;i<n;i++)
        {
            ll t1=0;
            if((20*a[i])-(10*b[i])>=0)
            t1=(20*a[i])-(10*b[i]);
            if(t1>ans)
            ans=t1;
        }
        cout<<ans<<endl;
        
        
    }
}