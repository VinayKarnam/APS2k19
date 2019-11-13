#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
ll maxx = 1e14;
using namespace std;
int main()
{
    ll fib[310];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<300;i++)
    {
        fib[i]=(fib[i-1]+fib[i-2])%10;
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,j=2;
        cin>>n;
       // cout<<(1<<j)<<endl;
        // while(n>=(1LL << j))
        // {
        //     j++;
        // }
   //    cout<<j<<endl;

        
        ll ind=(1<<(j-1));
        cout<<fib[(ind-1)%300]<<endl;

    }
}