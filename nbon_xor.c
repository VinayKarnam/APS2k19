#include<stdio.h>

int main()
{

    long long int n,q,i,j,k,t;
    scanf("%lld %lld",&n,&q);
    long long int arr[n+1],x=0,cr[n+2];
    cr[0]=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        x=x^arr[i];
        cr[i+1]=cr[i]^arr[i];
    }
    arr[n]=x;
    cr[n+1]=0;
    for(i=0;i<q;i++)
    {
        scanf("%lld",&k);
        x=0;
        t=k%(n+1);
        //printf("####%lld\n",t);
        printf("%lld\n",cr[t]);

    }
}