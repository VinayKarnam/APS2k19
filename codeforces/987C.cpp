#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;
const ll m=9e15;

int main()
{
    ll n;
    cin>>n;
    ll s[n+1],c[n+1],dp1[n+1],dp2[n+2];

    for(int i=0;i<n;i++)
    cin>>s[i];

    for(int i=0;i<n;i++)
    cin>>c[i];

    for(int i=0;i<n;i++)
    {
        dp1[i]=m;
        dp2[i]=m;
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(s[i]>s[j])
            {
                dp1[i]=min(dp1[i],c[i]+c[j]);
            }
        }
       // cout<<dp1[i]<<" ";
    }
//cout<<endl;
    for(int i=2;i<n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(s[i]>s[j])
            {
                dp2[i]=min(dp2[i],dp1[j]+c[i]);
            }
        }
        //cout<<dp2[i]<<" ";
    }
//cout<<endl;
    ll ans=*min_element(dp2,dp2+n);
    if(ans>=m)
    cout<<"-1";
    else
    {
        cout<<ans;
    }
    

}