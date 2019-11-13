#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll flag=1;
    while(1)
    {
        
        char str[5010];
        int f=0;
        cin>>str;
       // cout<<str<<endl;
        ll dp[strlen(str)+2];
       // memset(dp,0,sizeof(str));
        if(str[0]=='0')
        break;

        dp[0]=1;
       // dp[1]=1;
         if(str[0]<='2' && str[0]>='1' && str[1]<='6')
            dp[1]=2;
            else
            {
                dp[1]=1;
            }
        int i;
        for(i=2;i<strlen(str);i++)
        {
             if(str[i]=='0'&&str[i-1]=='0' || str[i]=='0'&&str[i-1]>'2')
            {
                f=1;
               // cout<<"dsflksdjf"<<endl;
                break;

            }
            else if(str[i]=='0')
            dp[i]=dp[i-2];
            else if(str[i-1]<='2' && str[i-1]>='1' && str[i]<='6')
            dp[i]=dp[i-2]+dp[i-1];
            
            else
            {
                dp[i]=dp[i-1];
            }
           //cout<<dp[i];
            
        }
        if(f==1)
        cout<<1<<endl;
        else
        cout<<dp[strlen(str)-1]<<endl;

    }
}