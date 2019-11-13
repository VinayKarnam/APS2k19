#include<bits/stdc++.h>
#define ll long long int

using namespace std;


int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll dp[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    dp[0]=1;
    for(ll i=1;i<n;i++)
    {
        dp[i]=1;
        for(ll j=0;j<i;j++)
        {
            if((arr[i]>0 && arr[j]<0 || arr[i]<0 && arr[j]>0)&& dp[i]<dp[j]+1 && abs(arr[i])>abs(arr[j]))
            {
                dp[i]=dp[j]+1;
            }
        }
    }
  
    cout<<*max_element(dp,dp+n)<<endl;
    return 0;
}