#include <bits/stdc++.h>
#include <utility>
#define ll long long int
using namespace std;

const ll mod = 1000000007;
int main()
{
    int n,k,j=0,mx=0;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
        if(min(m['a'],m['b'])>k){
            m[s[j]]--;
            j++;
        }
        else
        {
            mx=max(mx,i-j+1);
        }
        
    }
    cout<<mx;

}