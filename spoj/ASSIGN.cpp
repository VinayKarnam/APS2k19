#include <bits/stdc++.h>
#define ll long long int
const long long int maxn = 2*1e8 + 2;
using namespace std;



int main()
{
    int c;
    cin>>c;
    while(c--)
    {
        ll n;
        cin>>n;
        ll dp[(1<<n)+1];
        memset(dp,0,sizeof(dp));
        int st[n+1][n+1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cin>>st[i][j];
        }
        dp[0]=1;
        for(ll i=0;i<(1<<n);i++)
        {
            int taken = __builtin_popcount(i);
            for(ll j=0;j<n;j++)
            {
                if(st[taken][j]!=0 && !(i&(1<<j)))
                dp[i|(1<<j)]+=dp[i];
            }
        }
        
        cout<<dp[(1<<n) - 1]<<endl;
    }
}