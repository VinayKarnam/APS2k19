

#include <bits/stdc++.h>
#define ll long long int
#define size 100010
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b)
{
    return a.second<b.second;
}

const int mod = 100000000;

void add(int &a, int b){
    a += b;
    if(a >= mod)
        a -= mod;
}

int main()
{

    while (1)
    {
        ll n;
        cin >> n;
        pair<int, int> p[size];
        int dp[size];
        if(n==-1)
        break;
        for(int i=1;i<=n;i++)
        {
            cin>>p[i].first>>p[i].second;   
        }
        sort(p+1,p+n+1,cmp);
        dp[0]=1;
        for(int i=1;i<=n;i++)
        {
            dp[i]=dp[i-1];
            auto next=upper_bound(p,p+i+1,make_pair(0,p[i].first),cmp)-p-1;
           add(dp[i],dp[next]);
        }
        add(dp[n],mod-1);
        cout<<setfill('0')<<setw(8)<<dp[n]<<endl;
    }
}