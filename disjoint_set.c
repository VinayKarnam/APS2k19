#include<stdio.h>

void union_set(int* arr,int a,int b,int n)
{
    int i,c;
    c=arr[a];
    for(i=0;i<n;i++)
    {
        if(arr[i]==c)
        arr[i]=arr[b];
    }

}


int find(int* arr,int a,int b,int n)
{
    int r=0;
    if(arr[a]==arr[b])
    {
        r=1;
    }
    return r;

}





void main()
{
    int arr[10],n=10,i;
    for(i=0;i<n;i++)
    {
        arr[i]=i;
    }

    union_set(arr,2,1,n);
    union_set(arr,4,3,n);
    union_set(arr,8,4,n);
    union_set(arr,9,3,n);
    union_set(arr,6,5,n);

    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }


}