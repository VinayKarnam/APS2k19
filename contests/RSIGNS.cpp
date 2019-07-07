#include<iostream>
#include <bits/stdc++.h> 
#define mod 1000000007
using namespace std;

int main()
{
   long long int t;
   cin>>t;
   while(t--)
   {
       long long int k,res=1,x=2;
       cin>>k;
       while (k > 0) 
    { 
        if (k & 1) 
            res = (res*x) % mod; 
        k = k>>1;
        x = (x*x) % mod;   
    }
    cout<<(5*res)%mod<<endl;

   }
}