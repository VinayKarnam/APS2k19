#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;

const ll mod=1000000007;

int main()
{
   ll n,k;
   cin>>n>>k;
   unordered_map<int,int> m;
   for(int i=0;i<n;i++)
   {
       ll t;
       cin>>t;
       m[t]+=1;
   }

   vector<int> v;
   for(auto i : m)
   {
       v.push_back(i.second);
   }
   ll s=v.size();
   sort(v.begin(),v.end());
   ll dp[k+10][s+10];
   memset(dp,0,sizeof(dp));
   for(int i=s-1;i>=0;i--)
   {
       dp[0][i]=((v[i]%mod)+(dp[0][i+1]%mod))%mod;
   }

   for(int i=1;i<k;i++)
   {
       for(int j=s-1-i;j>=0;j--)
       {
          // cout<<i<<" "<<j<<endl;
           dp[i][j]=((dp[i-1][j+1]*(v[j]%mod))%mod+dp[i][j+1])%mod;
       }
   }

   ll ans=0;
   for(int i=0;i<k;i++)
   {
       ans=(ans+dp[i][0])%mod;
   }
   cout<<(ans+1)%mod<<endl;
}