#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        ll maxx=(n*(n+1))/2;
        if(m<n-1 || m>maxx)
        cout<<"-1"<<endl;
        else if(n==1&&m==0)
        cout<<-1<<endl;
        else
        {
            if(n==2&&m==1 || n==1)
            cout<<1<<endl;
           else if(m<=n+1||n==2&&m<=3)
            cout<<2<<endl;
            else if(m==maxx)
            cout<<n<<endl;
            else
            {
                ll ans=0;
                ll i=0;
                while(ans<m-1)
                {
                    ans=ans+(n-i);
                    i++;
                }
                cout<<i+1<<endl;
            }
            
        }
    }
    
}