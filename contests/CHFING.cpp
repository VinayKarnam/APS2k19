#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
#define ll long long
ll modInverse(ll a, ll m)
{
   a = a % m;
   for (ll x = 1; x < m; x++)
      if ((a * x) % m == 1)
         return x;
}

int main()
{
   long long int t, inv2 = 500000004;
   cin >> t;
   while (t--)
   {
      long long int k, n, num, ans, a, d, an;
      cin >> n >> k;
      a = k - 1;
      d = n - 1;
      // d = -(d);
      ll x;
      double t;
      // t = (a - d) / double(-(d));
      // num = floor(t);
      //  num = a/-d+1;
      an = a % d;
      // cout<<"dkjsd"<<num<<endl;
      //  x = ((num/2.0))*(((2*a)%mod+(((num-1)%mod)*(d%mod))%mod)%mod);
      // x = ((num * inv2)%mod) * (((2 * ((a)%mod)) % mod + (((num - 1) % mod) * (d % mod)) % mod) % mod);
      // ans = x;
      // ans = ans % mod;
      num = ((a - an) / d) + 1;

      ans = ((((num) % mod) * (((a) % mod + (an) % mod) % mod)) % mod * inv2) % mod;

      //    double x = (k+n-1-(n-1))/double(k+n-1-k);

      //    num = ceil(x);
      //    cout<<"dkjsd"<<num<<endl;
      //     ans = (((num/2)%mod)*(((k-1)+((num-1)%mod)*((n-1)%mod))%mod)%mod);

      cout << ans << endl;
   }
}