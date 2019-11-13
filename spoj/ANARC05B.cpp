#include<bits/stdc++.h>
#define ll long long int
#define off 10000
using namespace std;

int main()
{
    while(1)
    {
        ll m,n;
        cin>>m;
        if(m==0)
        break;

        ll a[m+1],prea[m+1];
        prea[0]=0;

        map<int,int> ma,mb;
       // ll sum=0;
        for(int i=1;i<=m;i++)
        {
            cin>>a[i];
            prea[i]=prea[i-1]+a[i];
            ma[a[i]+off]=i;
          //  cout<<prea[i];
        }
        cin>>n;
        ll b[n+1],preb[n+1];
        preb[0]=0;
       // ll sum=0;
       vector<int> c;
       c.push_back(0);
        for(int i=1;i<=n;i++)
        {
            cin>>b[i];
            mb[b[i]+off]=i;
            auto itr=ma.find(b[i]+off);
            if(itr!=ma.end())
                c.push_back(itr->first);

            preb[i]=preb[i-1]+b[i];
        }

       int preva=0,prevb=0;
       int cura,curb;
       ll sum=0;
       for(int i=0;i<c.size();i++)
       {
           cura=ma[c[i]];
           curb=mb[c[i]];
           ll s1,s2;
           s1=prea[cura]-prea[preva];
           s2=preb[curb]-preb[prevb];
           sum+=max(s1,s2);
           preva=cura;
           prevb=curb;
       }

       cura=m;
       curb=n;
       ll s1,s2;
           s1=prea[cura]-prea[preva];
           s2=preb[curb]-preb[prevb];
           sum+=max(s1,s2);
        cout<<sum<<endl;


    }

}