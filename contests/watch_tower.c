#include<stdio.h>


int main()
{
    int T,n,i,j,k;
    long long int c;
    char s[1000010];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        c=0;
        scanf("%d",&n);
        scanf("%s",s);
        if(n<=2)
        {
            if(n==1)
            {
                if(s[i]=='0')
                {
                    c++;
                }
                
            }
            else
                {
                    if(s[0]=='0' && s[1]=='0')
                    {
                        c++;
                    }
                }
        }
        else{
        if(s[0]=='0' && s[1]=='0')

        {
            s[0]='1';
            c++;
        }
        
        for(j=1;j<n-1;j++)
        {
           
             if(s[j-1]=='0' && s[j]=='0' && s[j+1]=='0')
             {
                 s[j]='1';
                 c++;
             }   
            
        }
        if(s[n-1]=='0' && s[n-2]=='0')
        {
            c++;
        }
        
    }
    printf("%lld\n",c);
    }
}