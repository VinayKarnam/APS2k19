#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
ll maxx = 1e14;
using namespace std;

ll n,q,k,l,r;
vector<pair<ll,ll>> coke;
vector<ll> price;
vector<ll> temp;

int left(int qq)
{
    if(l>k)
    {
        return l+qq;
    }
    else
    {
      return  l-qq;
    }
    
}


int right(int qq)
{
    if(r<k)
    {
        return r-qq;
    }
    else
    {
      return  r+qq;
    }
    
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        cin>>n>>q>>k>>l>>r;
        for(int i=0;i<n;i++)
        {
            ll t1,t2;
            cin>>t1>>t2;
            coke.push_back({t1,t2});
        }
        sort(coke.begin(),coke.end());
        for(int i=0;i<n;i++)
        {
            price.push_back(coke[i].second);
            temp.push_back(coke[i].first);
           // cout<<temp[i]<<" "<<price[i]<<endl;
        }
        cout<<"***************************"<<endl;

        for(int i=1;i<=q;i++)
        {
            int le=left(i);
            int ri=right(i);
            cout<<i<<" "<<le<<" "<<ri<<endl;

           int lb=lower_bound(temp.begin(),temp.end(),le)-temp.begin();
           int rb=upper_bound(temp.begin(),temp.end(),ri)-temp.begin();
           cout<<lb<<" "<<rb<<endl;
           if(lb>=rb)
           cout<<"-1"<<endl;
           else
           {
               cout<<*min_element(price.begin()+lb,price.begin()+rb)<<endl;
           }
           
            
        }


    }
}