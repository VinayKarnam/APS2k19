#include<stdio.h>
#include<string.h>

int min_coin(int* coin,int n,int cn)
{
    
    int dp[100][100],i,j;
    memset(dp,0,sizeof(dp[0][0])*100*100);
    
    for(i=1;i<=n;i++)
    {
        if(i%coin[0]==0)
        dp[0][i]=i/coin[0];
    }
   
    for(i=1;i<cn;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=coin[i])
            {
                if(dp[i-1][j]>dp[i][j-coin[i]]+1)
                dp[i][j]=dp[i][j-coin[i]]+1;
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
                
                
            }
            else
                dp[i][j]=dp[i-1][j];
        }
    }
 
    return dp[cn-1][n];

}


void main()
{
    int i,n,cn,coin[100];
    scanf("%d",&n);
    scanf("%d",&cn);
    for(i=0;i<cn;i++)
    {
        scanf("%d",&coin[i]);
        //printf("%d\n",coin[i]);
    }
    printf("%d",min_coin(coin,n,cn));
}