#include<stdio.h>
#include<string.h>


int subseq(char sb[], char string[])
{
    int l1,l2,i,j,dp[100][100];
    l1=strlen(sb)+1;
    l2=strlen(string)+1;
    memset(dp,0,sizeof(dp[0][0])*l1*l2);
    for(i=1;i<l1;i++)
    {
        for(j=1;j<l2;j++)
        {
            if(sb[i-1]==string[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                if(dp[i-1][j]>=dp[i][j-1])
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i][j-1];
                }
                
            }
            
        }
    }
    return dp[l1-1][l2-1];
}

int main()
{
    char sb[100],string[100];
    scanf("%s",sb);
    scanf("%s",string);
    printf("%d",subseq(sb,string));
    return 0;
}