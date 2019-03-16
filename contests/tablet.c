
#include<stdio.h>

int main()
{
    int i,j,t,n,b,w,h,p,max=-1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        max=-1;
        scanf("%d %d",&n,&b);
        for(j=0;j<n;j++)
        {
            scanf("%d %d %d",&w,&h,&p);
            if(p<=b)
            {
                if(w*h>max)
                max=w*h;
            }
        }
        if(max<=0)
        printf("no tablet\n");
        else
        {
            printf("%d\n",max);
        }
        
    }
}