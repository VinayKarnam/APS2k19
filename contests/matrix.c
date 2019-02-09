#include<stdio.h>


void main()
{
    int arr[12][12],v[12][12],i,j,c=0;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            v[i][j]=-1;
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(arr[i][j]==1)
            {
                if(v[i][j+1]!=-1 || v[i][j-1]!=-1 || v[i+1][j]!=-1 || v[i-1][j]!=-1 || v[i+1][j+1]!=-1 || v[i-1][j-1]!=-1 || v[i-1][j+1]!=-1 || v[i+1][j-1]!=-1)
                {
                   
                    v[i][j]=c;
                }
                else
                {
                     c++;
                    v[i][j]=c;
                }
                
            }
        }
    }
    printf("%d",c);
}