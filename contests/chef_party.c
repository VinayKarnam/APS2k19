#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,n,map[100010],zero,count,num;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       // printf("jhdljhdf\n");
        zero=0;
        count=0;
        scanf("%d",&n);
        memset(map,0,sizeof(map[0])*100010);
        for( j = 0; j < n; j++)
        {
            scanf("%d",&num);
            if(num==0)
            zero=1;
            map[num]=map[num]+1;
        }

        if(zero==1)
        {
            for(j=0;j<=n;j++)
            {
                if(j<=count)
                {
                    count=count+map[j];
                }
            }
            printf("%d\n",count);
        }
        else
        {
            printf("0\n");
        }
        
        

    }
    return 0;
}