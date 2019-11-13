#include <bits/stdc++.h>
#include <utility>
#define ll long long int
using namespace std;
#define maxn 100000
#define ld long double
const ll mod = 1000000007;

int main()
{
  ll n;
  string s;
  cin>>n;
  cin>>s;
  ll res=(n*(n-1))/2;
  //cout<<res<<s<<endl;
  for(int i=0;i<2;i++)
  {
      ll cur=1;
      for(int j=1;j<n;j++)
      {
        // cout<<s[i]<<" "<<s[i-1]<<endl;
          if(s[j]==s[j-1])
          cur++;
          else
          {
              res-=(cur-i);
              cur=1;
          }
          
      }
      reverse(s.begin(),s.end());
       
  }
  cout<<res<<endl;   
}