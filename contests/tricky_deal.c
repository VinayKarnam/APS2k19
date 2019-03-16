#include<stdio.h>
#include<math.h>

int main()
{
    long int t,a,i,j,d2,d1;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&a);
        d2=ceil(log2(a));
        for(j=1;j<10000000010;j++)
        {
            d1=(pow(2,j)-1)/j;
            if(d1 >= a)
            break;
        }

        printf("%ld %ld\n",j-1,d2);
    }
}