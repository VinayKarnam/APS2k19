#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a;
    cin>>b;
    int cost=0;

    if(a[0]!=b[0])
    cost++;

    for(int i=1;i<n;i++)
    {
        if(a[i-1]==b[i]&&a[i]==b[i-1])
        a[i]=b[i];
        if(a[i]!=b[i])
        cost++;
    }

    cout<<cost<<endl;

}