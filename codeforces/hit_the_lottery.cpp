#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
ll maxx = 1e14;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll count;
    count=n/100;
    n=n%100;
    count+=(n/20);
    n=n%20;
    count+=(n/10);
    n=n%10;
    count+=(n/5);
    n=n%5;
    count+=n;
    cout<<count<<endl;
}