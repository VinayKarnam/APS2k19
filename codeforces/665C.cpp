#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
ll maxx = 1e14;
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll n=s.size();
    for(int i=0,j=0;i<n;i=j)
    {
        while(j<n && s[i]==s[j])j++;
        char c='a';
        while(c==s[i]||(i>0&&c==s[i-1])||(j<n&&c==s[j]))c++;

        for(int k=i+1;k<j;k=k+2)
        s[k]=c;
    }
    cout<<s<<endl;
}