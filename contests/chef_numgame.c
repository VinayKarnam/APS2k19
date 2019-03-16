#include<stdio.h>

int main()
{
    long int i,t,n,a,neg=0,pos=0;
    scanf("%ld",&t);
    while(t--){
        neg=0;
        pos=0;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a);
            if(a<0)
            neg++;
            else
            {
                pos++;
            }
            
        }
        if(pos==0 && neg!=0)
        {
            printf("%ld %ld\n",neg,neg);
        }
        else if(pos!=0 && neg==0)
        {
            printf("%ld %ld\n",pos,pos);
        }
        else
        {
            if(pos>=neg)
            printf("%ld %ld\n",pos,neg);
            else
            {
                printf("%ld %ld\n",neg,pos);
            }
            
        }
        
    }
    return 0;
    
}