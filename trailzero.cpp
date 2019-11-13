#include<bits/stdc++.h>

#define ll long long int

using namespace std;

ll numzero(ll num)
{
    ll c=0;
    while(num>0)
    {
        int t = num%10;
        if(t==0)
        c++;
        else
        {
            break;
        }
        num=num/10;
        
    }
    return c;
}

int main()
{
    ll n1,n2,n,start=2;
    cin>>n1>>n2>>n;
    ll dp[n+1];
    dp[0]=numzero(n1);
    //cout<<"kfsdkjf"<<endl;
    dp[1]=numzero(n2);
    
    n1=n1/(pow(10,dp[0]));
    n2=n2/(pow(10,dp[1]));
    // cout<<(n1*n2)<<endl;
    if(n1%5==0 && n2%2==0)
    {
        dp[2]=dp[0]+dp[1]+numzero(n1*n2);
       
        start++;
       
    }
    else if(n1%2==0 && n2%5==0)
    {
        dp[2]=dp[0]+dp[1]+numzero(n1*n2);
        start++;
        ll n3=n1*n2;
         n3=n3/pow(10,numzero(n3));
        if(n3%2==0)
        {
            dp[3]=dp[1]+dp[2]+numzero(n2*n3);
            start++;
        }
    }
      cout<<dp[0]<<dp[1]<<dp[2]<<n<<endl;
    
    for(int i=start;i<n+1;i++)
    {
        dp[i]=dp[i-2]+dp[i-1];
       cout<<dp[i]<<endl;
    }
    ll sum=0;
    sum=accumulate(dp,dp+n,sum);
    cout<<sum<<endl;

}