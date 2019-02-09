#include<stdio.h>
#include<string.h>

int ways(int* arr,int num,int numlen)

{
    int dp[1000],i,j;
    memset(dp,0, sizeof(dp[0])*1000);

    dp[0]=1;
    for(i=0;i<numlen;i++)
    {
        for(j=0;j<=num-arr[i];j++)
        {
            if(dp[j]==1)
            {
                dp[j+arr[i]]=dp[j+arr[i]]+1;
            }
        }
    }
    return dp[num];
}

int main()
{
    int num,numlen,arr[20],i;
    scanf("%d %d",&num,&numlen);
    for(i=0;i<numlen;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",ways(arr,num,numlen));
    return 0;
}