#include<stdio.h>
#include<math.h>

long long int gcd(long long int a, long long int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
}

long long int lcm(long long int a, long long int b)
{
    return ((a*b)/gcd(a,b));
}


int main()
{

    long long int t,n,a,b,k,i,lc,t1,t2,t3;

    scanf("%lld\n",&t);
    for(i=0;i<t;i++)
    {
        lc=0;
        scanf("%lld %lld %lld %lld",&n,&a,&b,&k);
        if(a>=b)
        lc=lcm(a,b);
        else
        lc=lcm(b,a);
        //printf("%lld\n",n);
        t1=floor(n/lc);
        t2=floor(n/t2);
        t3=floor(n/t3);
        if(t2+t3-(2*t1)>=k)
        printf("Win\n");
        else
        printf("Lose\n");

    }
return 0;
}
