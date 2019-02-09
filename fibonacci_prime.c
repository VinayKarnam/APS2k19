#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int fib[100],sum=0;
    int n,i,j,x,y,flag;
    fib[0]=0;
    fib[1]=1;
    scanf("%d",&n);
    scanf("%d %d",&x,&y);
    //printf("%d %d",x,y);
    for(i=2;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        //printf("%d\n",fib[i]);
    }
    for(i=x;i<=y;i++)
    {
        flag=0;
        for(j=2;j<fib[i];j++)
        {
            if(fib[i]%j==0)
            {
                flag=1;
                //printf("**%d\n",fib[i]);
                break;
            }
        }
        if(flag==0)
        {
          //  printf("%d\n",fib[i]);
             sum=sum+fib[i];
        }
        //sum=sum+fib[i];
    }
    printf("%d",sum);
    return 0;
}