#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll p[100010];
        for(int i=0;i<n;i++)
        cin>>p[i];

        sort(p,p+n);
        // for(int i=0;i<n;i++)
        // cout<<p[i]<<endl;
        while(q--)
        {
            ll x;
            cin>>x;
            ll count=0;
            for(int i=0;i<n;i++)
            {
                if(x<=p[i])
                break;
                else
                {
                    count++;
                    x=2*(x-p[i]);
                }
                
            }
            cout<<count<<endl;
        }
    }
}