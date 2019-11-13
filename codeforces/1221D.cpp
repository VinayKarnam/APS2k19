#include <bits/stdc++.h>
#include <utility>
#define ll long long int
using namespace std;
#define maxn 100000
#define ld long double
const ll mod = 1000000007;
const long long INF64 = (long long)(1e18) + 100;

int main()
{
    ll q,n;
    cin>>q;
    while (q--)
    {
        
        cin>>n;
        vector<ll> a(n+1),b(n+1);
        vector<vector<ll>> dp(n+1,vector<ll>(3,0));
        for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
        dp[0][0]=0;
        dp[0][1]=b[0];
        dp[0][2]=2*b[0];
        for(int i=1;i<n;i++)
        {
            
            for(int j=0;j<3;j++)
            {
               ll res=INF64;
                for(int k=0;k<3;k++)
                {
                    if(a[i-1]+k!=a[i]+j)
                    res=res<b[i]*j+dp[i-1][k]?res:b[i]*j+dp[i-1][k];
                }
                dp[i][j]=res;
                // cout<<dp[i][j]<<" ";   
            }
            // cout<<endl;
        }
       ll ans=INF64;
       ans=min(dp[n-1][0],ans);
       ans=min(dp[n-1][1],ans);
       ans=min(dp[n-1][2],ans);
        cout<<ans<<endl;
    }
    
}