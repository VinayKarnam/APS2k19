#include<bits/stdc++.h>
using namespace std;map<char,int> m;string c="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";int f(int a){int r=0; while(a!=0){r+=(a%64); a=a/64;}return r;}
int main(){int t,n,l,i;cin>>t;for(i=0;i<64;i++)m[c[i]]=i;while(t--){ cin>>n; string s; cin>>s;l=s.size();int a[l+1];for(int i=0;i<l;i++)a[i]=m[s[i]];
for(i=l-1;i>=0;i=i-2){a[i]=m[s[i]]*2;a[i]=f(a[i]);}int z=0;z=accumulate(a,a+l,z); cout<<c[(64-z%64)%64]<<endl; }}