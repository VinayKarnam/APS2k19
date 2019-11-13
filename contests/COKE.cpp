#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define def 10000000

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k,l,r;
        cin>>n>>m>>k>>l>>r;
        ll c[n+1],p[n+1];
        for(int i=0;i<n;i++)
        cin>>c[i]>>p[i];

        ll min=def;
        for(int i=0;i<n;i++)
        {
            int t;
            if(c[i]>k)
            {
                t=c[i]-m;
                if(t<k)
                t=k;
            }
            else if(c[i]<k)
            {
                t=c[i]+m;
                if(t>k)
                t=k;
            }
            else
            {
                t=k;
            }
            
            if(t>=l && t<=r)
            {
                if(p[i]<min)
                min=p[i];
            }
        }
        if(min==def)
        cout<<"-1"<<endl;
        else
        cout<<min<<endl;
    }
}