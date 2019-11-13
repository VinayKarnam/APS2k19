#include <bits/stdc++.h>
#define ll long long int
const long long int maxn = 2*1e8 + 2;
using namespace std;



int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s,s2="KEK";
        cin>>s;
        int dp[4][s.size()+2];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<=s.size();i++)
        dp[0][i]=1;

        for(int i=1;i<4;i++)
        {
            for(int j=1;j<=s.size();j++)
            {
                if(s2[i-1]==s[j-1])
                dp[i][j]=dp[i-1][j-1]+dp[i][j-1];
                else
                dp[i][j]=dp[i][j-1];
                // cout<<dp[i][j]<<" ";
            }
            // cout<<endl;
        }
        cout<<dp[3][s.size()]<<endl;
    }
}