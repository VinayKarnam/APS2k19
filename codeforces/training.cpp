#include <bits/stdc++.h>
#include <utility>
#define ll long long int
using namespace std;
#define maxn 100000
#define ld long double
const ll mod = 1000000007;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        unordered_map<string,vector<int>> m;
        for(int i=0;i<n;i++)
        {
            string s;
            int b;
            cin>>s>>b;
            if(m.find(s)!=m.end())
            {
                m[s][b]+=1;
            }
            else
            {
                m[s]=vector<int>(2,0);
                m[s][b]=1;
            }
            
        }
        ll ans=0;
        for( auto it : m)
        {
            ans=ans+max(it.second[0],it.second[1]);
        }
        cout<<ans<<endl;
    }
}