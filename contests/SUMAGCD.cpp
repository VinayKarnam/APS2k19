#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
#define ll long long
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 




int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,a[100010],gc[100010],rgc[100010],ans;
       // sort(a,a+n);
       cin>>n;
        for(int i=0;i<n;i++)
        cin>>a[i];

        gc[0]=a[0];
    
        for(int i=1;i<n;i++)
        {
            gc[i]=gcd(gc[i-1],a[i]);
           // cout<<gc[i]<<endl;
        }
        rgc[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rgc[i]=gcd(rgc[i+1],a[i]);
        }
        rgc[n]=0;
         ans = a[0]+rgc[1];
         ll temp=0;
         for(int i=1;i<n;i++)
         {
             temp = gcd(gc[i-1],rgc[i+1]);
             if(temp+a[i]>ans)
             ans = temp+a[i];
         }

         cout<<ans<<endl;

    }
    
    return 0;
}