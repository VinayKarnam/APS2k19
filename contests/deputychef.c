
#include<stdio.h>
int main()
{
    long int t,n,a[105],d[105],i,max,flag;
    scanf("%ld",&t);
    while(t--)
    {
        max=0;
        flag=0;
        scanf("%ld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%ld",&a[i%n]);
        }
        for(i=1;i<=n;i++)
        {
            scanf("%ld",&d[i%n]);
           // printf("%ld %ld\n",a[i%n],d[i%n]);
        }

    for(i=1;i<=n;i++)
    {
        if((a[(i+1)%n]+a[(i-1)%n])<d[i%n] && d[i%n]>max)
        {
            flag=1;
            max=d[i%n];
            //printf("%ld\n",max);
        }
    }

    if(flag==0)
    printf("-1\n");
    else
    {
        printf("%ld\n",max);
    }
    




    }
}