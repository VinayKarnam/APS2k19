#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;


int main()
{
    freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
    ll n;
    cin>>n;
    ll temp[n+1];
    for(int i=1;i<=n;i++)
    cin>>temp[i];

    ll neg[n+10],pos[n+10];
    neg[0]=pos[n+1]=0;
    for(int i=1;i<=n;i++)
    {
        neg[i]=neg[i-1];
        if(temp[i]>=0)
        neg[i]+=1;
    }

    for(int i=n;i>0;i--)
    {
        pos[i]=pos[i+1];
        if(temp[i]<=0)
        pos[i]+=1;
    }
    ll res=INT_MAX;
    for(int i=1;i<n;i++)
    {
        res=min(res,neg[i]+pos[i+1]);
    }
    cout<<res<<endl;
}