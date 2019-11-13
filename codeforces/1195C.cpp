#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;


int main()
{
    ll n;
    cin>>n;
    ll a1[n+2],a2[n+2],dp[n+2][3];
    for(int i=2;i<=n+1;i++)
    {
         cin>>a1[i];
    }
   

    for(int i=2;i<=n+1;i++)
    cin>>a2[i];

    // dp[0][0]=dp[0][1]=dp[0][3]=0;
    // dp[1][0]=dp[1][1]=dp[1][3]=0;
    memset(dp,0,sizeof(dp));

    for(int i=2;i<=n+1;i++)
    {
        dp[i][0]=max(dp[i-1][1]+a1[i],max(dp[i-2][1],dp[i-2][0])+a1[i]);
        dp[i][1]=max(dp[i-1][0]+a2[i],max(dp[i-2][1],dp[i-2][0])+a2[i]);
        //dp[i][2]=max(dp[i-1][0],dp[i-1][1])+max(a1[i]+a2[i]);
        //cout<<dp[i][0]<<" "<<dp[i][1]<<" "<<dp[i][2]<<endl;
    }
   
    cout<<max(dp[n+1][0],dp[n+1][1])<<endl;
    
}