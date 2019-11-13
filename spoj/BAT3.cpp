#include <bits/stdc++.h>
#define ll long long int
const long long int maxn = 2*1e8 + 2;
using namespace std;



int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=1;i<n;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(arr[j]>arr[i] || j==m)
                {   
                    if(dp[i]<1+dp[j])
                    dp[i]=1+dp[j];
                }
            }
        }
        // for(int i=0;i<n;i++)
        // cout<<dp[i]<<" ";
        // cout<<endl;
        cout<<*max_element(dp,dp+n)<<endl;
    }
}