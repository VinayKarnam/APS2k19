#include<stdio.h>

int kadane(int *arr,int n)
{
    int i,max=0,tmax=0;
    for(i=0;i<n;i++)
    {
        tmax=tmax+arr[i];
        if(tmax<0)
        tmax=0;
        if(max<tmax)
        max=tmax;
    }
    return max;
}



void main()
{
    int n,i;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("%d",kadane(arr,n));
}