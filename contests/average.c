#include<stdio.h>

int main()
{
    long int t,n,k,v,a,i,j,sum,result,ans;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
       scanf("%ld %ld %ld",&n,&k,&v);
       sum=0;
       for(j=0;j<n;j++)
       {
           scanf("%ld",&a);
           sum=sum+a;
       }
        result=(v*(n+k))-sum;
        if(result>0)
        {
            if((result%k)==0)
            {
                ans=result/k;
            }
            else
            {
                ans=-1;
            }
            
        }
        else
        {
            ans=-1;
        }
        printf("%ld\n",ans);
        
    }
}