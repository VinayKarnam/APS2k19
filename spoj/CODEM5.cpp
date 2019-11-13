#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;
const ll maxx=99999999;
int main()
{
    int t;
    cin>>t;
    ll dp[30][10010],arr[30];
    while(t--)
    {
       
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        cin>>arr[i];
        for(int i=0;i<=n;i++)
        for(int j=0;j<=k;j++)
        dp[i][j]=maxx;

        for(int i=1;i<=n;i++)
        {
           
            for(int j=1;j<=k;j++)
            {
               // cout<<"kdfasd"<<endl;
                if(arr[i]==j)
                {
                     dp[i][j]=1;
                     //cout<<"@"<<arr[i]<<" "<<j<<"@";
                }
               

                else
                {
                    if(arr[i]<j)
                    {
                        if(dp[i-1][j-arr[i]]!=maxx)
                        dp[i][j]=min(dp[i-1][j-arr[i]]+1,dp[i-1][j]);
                        else
                        dp[i][j]=dp[i-1][j];
                    }
                    else
                    dp[i][j]=dp[i-1][j];
                }
                //cout<<dp[i][j]<<" ";
            }
           // cout<<endl;
        }

        if(dp[n][k]==maxx)
        cout<<"impossible"<<endl;
        else
        cout<<dp[n][k]<<endl;
    }
}