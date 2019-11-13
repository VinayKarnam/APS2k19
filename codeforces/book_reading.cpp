#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
ll maxx = 1e14;
using namespace std;
int main()
{
    unordered_map<int,vector<int>> digits;
    for(int i=0;i<10;i++)
    {
        //cout<<i<<" ";
        for(int j=1;j<=10;j++)
        {
            int num=i*j;
            digits[i].push_back(num%10);
           // cout<<num%10<<" ";
            if(num%10==0)
            break;

        }
        
        //cout<<endl;
       // cout<<digits[i].size()<<endl;
    }
    //cout<<"######################"<<endl;
    for(int i=0;i<10;i++)
    {
        //cout<<i<<" ";
        for(int j=1;j<digits[i].size();j++)
        {
            digits[i][j]+=digits[i][j-1];
            //cout<<digits[i][j]<<" ";
        }
        //cout<<endl;
    }
    int q;
    cin>>q;
    while(q--)
    {
        ll n,m;
        cin>>n>>m;
        if(m>n)
        cout<<"0"<<endl;
        else
        {
            int d=m%10;
            ll count=n/m;
            ll res=0;
            res=res+((count/digits[d].size())*digits[d][digits[d].size()-1]);
            int rem=count%digits[d].size();
            if(rem)
            {
                res=res+digits[d][rem-1];
            }
            cout<<res<<endl;
        }
        
    }
}