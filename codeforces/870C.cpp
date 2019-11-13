#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;

const int maxn = 16;
int main()
{
    vector<int> ans(maxn, -1);
    ans[0] = 0;
    for (int i = 1; i < maxn; ++i) {
        for (auto j: vector<int>{4, 6, 9}) {
            if (i >= j && ans[i - j] != -1) {
                ans[i] = max(ans[i], ans[i - j] + 1);
            }
        }
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        if(n<maxn)
        cout<<ans[n]<<endl;
        else
        {
            ll t;
            t=(n-maxn)/4+1;
            cout<<t+ans[n-4*t]<<endl;
        }
    }

}