
#include<stdio.h>
#include<math.h>

int main()
{
   long  int m=3,n=7,count,i,j,flag,sc,t,init,in;
    count = 0;
    // printf("djsfldsjfkhsdlfjh");
    for(i=0;i<pow(2,50);i++)
    {
        flag=0;
        sc=0;
        init=0;
        in=0;
        for(j=0;j<50;j++)
        {
            t=i&(1<<j);
            if(t==0)
            {
                if(init==1)
                {
                    in=1;
                    if(sc<3)
                    {
                     
                        flag=1;
                       // printf("%d\n",i);
                        break;
                    }
                }
                sc=0;
            }
            else
            {
                init=1;
                sc++;
            }
           
            
        }
        if(flag==0)
        {
            if(in==0)
            {
                if(sc>2)
                {
                      count++;
                    //  printf("%d\n",i);
                }
               
            }
            else
            {
                //printf("%d\n",i);
                  count++;
            }
            
          
        }
    }

    printf("%ld",count+1);


}