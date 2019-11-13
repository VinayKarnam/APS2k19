#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    while(1)
    {
        cin>>m>>n;
        if(m==0 && n==0)
        break;

        int a[21],b[21],c[21],k;
        k=n;
        for(int i=0;i<m;i++)
        {
            cin>>a[i]>>b[i];
            c[i]=b[i]-a[i];
            k-=a[i];
        }

        int i;
        int dp[m+1][n+1];
        for(i=0;i<=c[0];i++)
        dp[0][i]=1;
        for(;i<=k;i++)
        dp[0][i]=0;
        for(i=1;i<m;i++)
        {
            for(int j=0;j<=k;j++)
            {
                int s=0;
                for(int p=max(0,j-c[i]);p<=j;p++)
                {
                    s+=dp[i-1][p];
                }
                dp[i][j]=s;
                //cout<<dp[i][j]<<" ";

            }
           // cout<<endl;
        }
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<=k;j++)
        // cout<<dp[i][j]<<" ";
        // cout<<endl;
        // }
        
        cout<<dp[m-1][k]<<endl;
    }
}