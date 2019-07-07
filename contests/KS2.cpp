#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,a=0,i;
        cin>>n;
       for(i=n;i>0;i=i/10)
       a=a+(i%10);

       cout<<n;
       a=(10-a%10)%10;
       cout<<a<<endl;

    }
}