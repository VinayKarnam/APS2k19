#include<bits/stdc++.h>
#define ll long long int

using namespace std;
ll dp[500000];

ll fun(ll num)
{
    if(num<500000)
    return dp[num];
  ll sum=fun(num/2)+fun(num/3)+fun(num/4);
  if(sum<num)
  sum=num;
  return sum;
}
int main()
{
    
   // memset(dp,0,sizeof(dp));
    for(ll i=0;i<=500000;i++)
    {
        ll sum=dp[i/2]+dp[i/3]+dp[i/4];
        if(sum>i)
        dp[i]=sum;
        else
        {
            dp[i]=i;
        }
        
    }
    ll c;
    while (cin>>c)
    {
        cout<<fun(c)<<endl;
    }
    
}