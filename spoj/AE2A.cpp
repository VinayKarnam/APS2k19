#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;
double dp[600][3421];
int main()
{
    int t;
    cin>>t;
    
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=6;i++)
        dp[1][i]=1/6.0;
    
    for(int i=2;i<=570;i++)
    {
        for(int j=i;j<(i+1)*6;j++)
        {
            if(j-i>=0)
				dp[i][j]+=dp[i-1][j-1];
			if(j-i>=1)
				dp[i][j]+=dp[i-1][j-2];
			if(j-i>=2)
				dp[i][j]+=dp[i-1][j-3];
			if(j-i>=3)
				dp[i][j]+=dp[i-1][j-4];
			if(j-i>=4)              
				dp[i][j]+=dp[i-1][j-5];
			if(j-i>=5)
				dp[i][j]+=dp[i-1][j-6];

            dp[i][j]/=6.0;
        }

    }
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        
        // for(int i=1;i<=n;i++)
        // {
        //     for(int j=1;j<=)
        // }

        if(n>570||k>n*6 || k>570*6)
        {
            cout<<"0"<<endl;
            continue;
        }
        cout<<floor(dp[n][k]*100)<<endl;

    }   
}