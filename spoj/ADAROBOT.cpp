#include <bits/stdc++.h>
#define ll long long int
const long long int maxn = 2*1e8 + 2;
using namespace std;


ll dp[maxn];
int main()
{
    dp[0]=0;
    dp[1]=1;
    for(ll i =2;i<=maxn;i++)
    {
      ll t=(__builtin_ffsl(i*(i-1)));
      t=t*t*t;
      dp[i]=t+dp[i-2];
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll x;
        scanf("%lld",&x);
        printf("%lld\n",dp[x]);
    }
}