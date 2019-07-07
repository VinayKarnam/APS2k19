#include<iostream>
#include <bits/stdc++.h> 
#define mod 1000000007
#define ll long long int
using namespace std;


int main()
{
    ll N;
    cin>>N;
    ll amount;
    cin>>amount;
   
    ll a[4];
    for(ll i=0;i<4;i++)
    {
        cin>>a[i];
    }
ll result;
ll flag=0;
    for(ll i=0;i<=a[3];i++)
    {
        for(ll j=0;j<=a[2];j++)
        {
            for(ll k=0;k<=a[1];k++)
            {
                for(ll l=0;l<=a[0];l++)
                {
                    result=(100*l)+(200*k)+(500*j)+(1000*i);
                    if(result==amount)
                    {
                        flag=1;
                        result=i+j+k+l;
                        break;
                    }
                }
                if(flag==1)
                   break;
            }
            if(flag==1)
             break;
        }
        if(flag==1)
             break;
    }
    if(flag==0)
    result=0;

    cout<<result<<endl;
}