#include<stdio.h>
#include<string.h>

int main()
{
    long long int t,n,count,temp,i;
    char str[1000010],x;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        scanf("%s %c",str,&x);
        temp=0;
        count=(n*(n+1))/2;
        for(i=0;i<n;i++)
        {
            if(str[i]==x)
            {
                count=count-((temp*(temp+1))/2);
                temp=0;
            }
            else
            {
                temp++;
            }
            
        }
        count=count-((temp*(temp+1))/2);
        printf("%lld\n",count);
    }
    
}