#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
ll maxx = 1e14;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        ll t;
        cin>>t;
        if(t%2==1)
        odd++;
        else
        {
            even++;
        }
        
    }
    cout<<min(odd,even)<<endl;
}