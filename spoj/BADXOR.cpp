#include <bits/stdc++.h>
#define ll long long int
#define fo(k,n) for(int i=k;i<n;i++)
// #define fo(k,m) for(int j=k;j<n;j++)
const long long int mod=100000007;
using namespace std;



int main()
{
    int t,c=0;
    cin>>t;
    while (t--)
    {
        c++;
        int n,m;
        cin>>n>>m;
        ll a[1030],b[1030];
        fo(0,n)
        {
            cin>>a[i];
        }
        fo(0,m)
        {
            cin>>b[i];   
        }
        ll dp[n+10][1030];
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<1030;j++)
            {
                dp[i][j]=(dp[i-1][j]+dp[i-1][j^a[i-1]])%mod;
            }
        }
        ll bad=0;
        for(int i=0;i<m;i++)
        {
            bad=(bad+dp[n][b[i]])%mod;
        }
        int all = 1;
        for (int i = 1; i <= n; i ++) {
            all = (all << 1) % mod;
        }
        cout<<"Case "<<c<<": "<<(all-bad)<<endl;
    }
    
}