#include<stdio.h>
#include<string.h>
int subset_sum(int n,int *a,int sum)
{
    int dp[1000][1000],i,j;
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(i=1;i<=n;i++)
    {
        dp[i][0]=1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
              
        }
    }
}









int main()
{
    int a[100],n,i,sum;
    scanf("%d %d",&n,&sum);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i],sum);
    }
}