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
    cin >> t;
    while (t--)
    {
        ll n;
        ll ans=0;
        ll cur=0;
        cin >> n;
        vector<int> a(n);
        vector<int> bits(33, 0);
        vector<int> res;
        vector<vector<int>> d(n,vector<int>(2,0));
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cur=(cur|a[i]);
            d[i][0]=a[i];
            d[i][1]=i;
            for (int j = 0; j < 32; j++)
            {
                bits[j] += ((a[i] & (1 << j)) ? 1 : 0);
            }
        }
        ans=cur;
       // cout<<ans<<"ans"<<endl;
        sort(a.begin(), a.end());
        sort(d.begin(),d.end());
        vector<int> sig,sig1;
        for (int z=0;z<n;z++)
        {
           int i=a[z];
            int flag = 0;
            for (int j = 0; j < 32; j++)
            {
                //  bits[j]+=((a[i]&(1<<j))?1:0);
                if ((i & (1 << j)) && bits[j] < 2)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
               // cout << i << endl;
               res.push_back(d[z][1]);
                for (int j = 0; j < 32; j++)
                {
                    bits[j]-=((i & (1 << j)) ? 1 : 0);
                }
                ans+=cur;
            }
            else
            {
                sig.push_back(i);
                sig1.push_back(d[z][1]);
            }
            
        }

int count=0;
        for(auto i : sig)
        {
            for (int j = 0; j < 32; j++)
            {
                if((i & (1 << j))&&bits[j]==1)
                {
                    cur-=(1<<j);
                }
                bits[j]-=((i & (1 << j)) ? 1 : 0);
            }
           // cout<<i<<endl;
           res.push_back(sig1[count]);
            ans+=cur;
            count++;
        }
        cout<<ans<<endl;
        for(auto i : res)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}