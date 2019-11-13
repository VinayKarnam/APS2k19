#include <bits/stdc++.h>
#include <utility>
#define ll long long int
using namespace std;
#define maxn 100000
#define ld long double
const ll mod = 1000000007;

int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll c,m,x;
        cin>>c>>m>>x;
        if(c+m+x<0||c==0||m==0)
        cout<<0<<endl;
        else
        {
            ll mx=0;
            ll mn=min(c,m);
            if(mn<=x)
            cout<<mn<<endl;
            else
            {
                ll ans=0;
                c-=x;
                m-=x;
                ans+=x;
              // cout<<c<<" "<<m<<endl;
                mn=min(c,m);
                mx=max(c,m);
                ll diff=mx-mn;
                if(diff>=mn)
                ans+=mn;
                else
                {
                   //cout<<diff<<endl;
                    mn-=diff;
                    ans+=diff;
                    ans+=(2*mn)/3;
                }
                cout<<ans<<endl;
                
            }
            
        }
        
    }
}