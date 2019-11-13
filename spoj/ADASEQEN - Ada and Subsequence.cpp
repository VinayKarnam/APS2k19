#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp[0][0])*(n+1)*(m+1));
    int alpha[256];
    //int s='a';
   // cout<<s<<endl;
    for(char i='a';i<='z';i++)
    {
        int t;
        cin>>t;
        alpha[i]=t;
        //s++;
    }
    char str1[2025],str2[2025];
    cin>>str1;
    cin>>str2;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(str1[i-1]==str2[j-1])
            dp[i][j]=dp[i-1][j-1]+alpha[str1[i-1]];
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
          //  cout<<dp[i][j];
        }
     //   cout<<"\n";
    }
    cout<<dp[n][m]<<endl;

}
