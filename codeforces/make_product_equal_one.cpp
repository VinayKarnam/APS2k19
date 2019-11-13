#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
ll maxx = 1e14;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll t,count=0,neg=0,zero=0;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t==0)
        {
            zero++;
            count++;
        }
        
        else
        {
            if(t<0)
            {
                neg++;   
            }
            count+=(abs(t)-1);
        }
        
    }
    if(neg%2!=0)
    {
        if(zero==0)
        {
            count=count+((neg%2)+1);
        }
        
    }
   
    
    cout<<count<<endl;
}