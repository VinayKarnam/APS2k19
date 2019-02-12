#include<stdio.h>
#include<string.h>


void pascal(int n,int k)
{
   int dp[100][100],j,i;
  // printf("*\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=k;j++)
        {
            if(j>i)
            {
                break;
            }
           
            if(i==0 || j==0)
            {
                dp[i][j]=1;
            }
            else if(i==j)
            {
                dp[i][j]=1;
            }
            else if(j<i)
            {
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }
            else
            {
                
            }
            printf("%d\t",dp[i][j]);
            
        }
        printf("\n");
    }
}


void main()
{
    int n,k;
   // scanf("%d %d",&n,&k);
    pascal(5,3);

}