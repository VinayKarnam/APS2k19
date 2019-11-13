#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
ll maxx = 1e14;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+1],suffix[n+1];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        suffix[n-1]=INT_MAX;
        for(int i=n-2;i>=0;i--)
        {
            suffix[i]=min(arr[i+1],suffix[i+1]);
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>suffix[i])
            res++;
        }
        cout<<res<<endl;
    }
}