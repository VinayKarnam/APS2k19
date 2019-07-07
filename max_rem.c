#include<stdio.h>

int main()
{
    long long int n,i,f=-1,s=-1,num;
    scanf("%lld",&n);
    while(n--){
        scanf("%lld",&num);
        if(num>f)
        {
            s=f;
            f=num;
        }
        else if(num>s && num!=f)
        {
            s=num;
        }
    }
    if(s==-1)
    {
        printf("0");
    }
    else
    {
        printf("%lld",s);
    }
    
        

}