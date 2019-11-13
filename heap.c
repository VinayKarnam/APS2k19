#include<stdio.h>
#include<stdbool.h>

void bottom_up(int* h,int n)
{ 
    int i,k,v,j;
    bool heap;
    for(i=n/2;i>0;i--)
    {
        k=i;
        v=h[k];
        heap=false;
        while(!heap && (2*k)<=n)
        {
            
            j=2*k;
            if(j<n)
            {
                if(h[j+1]>h[j])
                {
                    j+=1;
                   // printf("##%d\n",h[j]);
                }
                
            }
              if(v>=h[j])
                {
                    heap=true;
                }
                else
                {
                    h[k]=h[j];
                    
                    k=j;
                    // printf("**%d\n",v);

                }
        }
        h[k]=v;
    }

  
}

void heap_sort(int* h,int n)
{
    int i,t;
    bottom_up(h,n);
    for(i=0;i<n;i++)
    {
       t=h[1];
       h[1]=h[n-i];
       h[n-i]=t;
       bottom_up(h,n-i-1);

    }
    for(i=1;i<=n;i++)
    {
        printf("%d\t",h[i]);
    }
}

void priority(int* arr,int n)
{
    
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n+1];

    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    heap_sort(arr,n);
    
}