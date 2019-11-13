#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    cin>>arr[i];

    int seq[]={4,8,15,16,23,42};

    int dp[7][n+2];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<6;i++)
    dp[0][i]=0;

    for(int i=1;i<=n;i++)
    {
        dp[0][i]=dp[0][i-1];
        if(arr[i]==4)
        dp[0][i]+=1;
    }

    for(int i=1;i<6;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(arr[j]==seq[i])
            dp[i][j]=min(dp[i-1][j],dp[i][j-1]+1);
            else
            dp[i][j]=dp[i][j-1];
        }
    }
    // for(int i=0;i<6;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<n-dp[5][n]*6<<endl;
}