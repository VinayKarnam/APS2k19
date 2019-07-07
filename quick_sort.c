#include<stdio.h>


int arr[100],n;
int count=0;
void quick(int l,int r)
{
  int i=l-1,t;
  int j,p;
//printf("%d  %d\n",l,r);

  if(l<r)
  {
      p=arr[r];
      for(j=l;j<r;j++)
        {
            if(arr[j]<arr[r])
            {
                i++;
                    t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
            }
        }
        i++;
        t=arr[i];
        arr[i]=arr[r];
        arr[r]=t;
        quick(l,i-1);
        quick(i+1,n-1);

  }
  
}

int main()
{
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quick(0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}