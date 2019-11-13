#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
ll maxx = 1e14;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n%2==0)
    cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
        for(int i=1;i<=2*n;i++)
        {
            if(i<=n)cout<<2*i-(i%2)<<" ";
            else cout<<2*(i-n)-(i%2)<<" ";
        }
    }
    
}