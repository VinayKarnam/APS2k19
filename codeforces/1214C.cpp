#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;


int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> v;
    
    for(int i=0;i<n;i++)
    {
        if(v.size()==0)
            v.push_back(s[i]);
        else
        {
            if(v[v.size()-1]=='('&&s[i]==')')
            v.pop_back();
            else
            {
                v.push_back(s[i]);
            }    
        }
    }
   // cout<<v.size()<<endl;
    if(v.size()==0)
    cout<<"YES"<<endl;
    else if(v.size()==2)
    {
        if(v[0]==')'&&v[1]=='(')
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}