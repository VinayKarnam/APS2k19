#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll per;
        per=n/k;
        if(per%k==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    
}