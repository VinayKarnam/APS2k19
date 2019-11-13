#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;


int main()
{
    ll m,s;
    cin>>m>>s;

    if(s<1&&m>1||s>m*9)
    cout<<"-1 -1";
    else
    {
        for(int i=m-1,k=s;i>=0;i--)
        {
            int j=max(0,k-9*i);
            if(j==0&&i==m-1&&k)
            j=1;
            cout<<j;
            k-=j;
        }
        cout<<" ";
        for(int i=m-1,k=s;i>=0;i--)
        {
            int j=min(9,k);
            cout<<j;
            k-=j;
        }
    }
    
}