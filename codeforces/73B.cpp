#include <bits/stdc++.h>
#include <utility>
#define ll long long int
using namespace std;
#define maxn 100000
#define ld long double
const ll mod = 1000000007;

int main()
{
    ll n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                cout<<"W";
                else
                cout<<"B";
            }
            else
            {
                if(j%2==0)
                cout<<"B";
                else
                cout<<"W";
            }
            
        }
        cout<<endl;
    }
}