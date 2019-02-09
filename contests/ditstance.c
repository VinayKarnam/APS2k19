#include<stdio.h>

void main()
{
    int t,n,i,j,f;
    double a[1000010],b[1000010];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        
        scanf("%d",&n);
    
        for(j=1;j<=n;j++)
        {
            scanf("%f",&a[j]);
        }
        for(j=1;j<=n;j++)
        {
            scanf("%f",&b[j]);
        }
        if(a[n]!=b[1])
        {
            printf("No\n");
        }
        else
        {
            f=0;
            for(j=2;j<=n-1;j++)
            {
                if(a[j]+b[j]<b[1])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
            
            
            
        }
        
    }

}