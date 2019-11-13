#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.size();
        ll dp[n+10][n+10];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<n;i++)
        {
            for(int j=0,k=i;k<n;k++,j++)
            {
                if(s[j]==s[k])
                dp[j][k]=dp[j+1][k-1];
                else
                dp[j][k]=min(dp[j][k-1],dp[j+1][k])+1;

               // cout<<s[j]<<s[k]<<" "<<dp[j][k]<<" "<<j<<k<<endl;
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        

        cout<<dp[0][n-1]<<endl;
    }
}