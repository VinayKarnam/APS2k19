#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
ll maxx = 1e14;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,pi,p;
        cin>>n>>p>>pi;
        string s;
        cin>>s;
        ll dp[n+1][2];
        dp[0][0]=p+pi;
        dp[0][1]=2*(p+pi);
        for(int i=1;i<n;i++)
        {
            dp[i][0]=dp[i][1]=maxx;
            if(s[i]=='0')
            {
                dp[i][0]=min(dp[i][0],dp[i-1][0]+p+pi);
                dp[i][0]=min(dp[i][0],dp[i-1][1]+2*p+pi);

                dp[i][1]=min(dp[i][1],dp[i-1][1]+p+2*pi);
                dp[i][1]=min(dp[i][1],dp[i-1][0]+2*(p+pi));
            }
            else
            {
                dp[i][1]=min(dp[i][1],dp[i-1][1]+p+2*pi);
            }
            
        }
        cout<<dp[n-1][0]+pi<<endl;
    }
}