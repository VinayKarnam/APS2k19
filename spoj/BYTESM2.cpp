#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll h,w;
        cin>>h>>w;
        vector<vector<ll>> floor(h+10,vector<ll>(w+10,0));
        vector<vector<ll>> dp(h+10,vector<ll>(w+10,0));
        for(int i=1;i<=h;i++)
        for(int j=1;j<=w;j++)
        cin>>floor[i][j];

        ll maxe=-9999999;
        for(int i=h;i>0;i--)
        {
            for(int j=w;j>0;j--)
            {
                vector<ll> v;
                v.push_back(dp[i+1][j]);
                v.push_back(dp[i+1][j+1]);
                v.push_back(dp[i+1][j-1]);
                dp[i][j]=floor[i][j]+*max_element(v.begin(),v.end());
                if(dp[i][j]>maxe)
                maxe=dp[i][j];
            }
        }
        cout<<maxe<<endl;
    }
    
}