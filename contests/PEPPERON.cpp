#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll p1=0,p2=0;
        cin>>n;
        char arr[n+10][n+10];
        for(int i=1;i<=n;i++)
        {
            ll t1=0,t2=0;
            for(int j=1;j<=n;j++)
            {
                // char x;
                // cin>>x;
                // if(j<=n/2)
                // t1=t1+(x-'0');
                // else
                // {
                //     t2=t2+(x-'0');
                // }
                cin>>arr[i][j];
                
            }
        //    // cout<<i<<" "<<t1<<" "<<t2<<endl;
        //     if(abs(p1+t1-p2-t2)>abs(p1+t2-p2-t1))
        //     {
        //         p1=p1+t2;
        //         p2=p2+t1;
        //     }
        //     else
        //     {
        //          p1=p1+t1;
        //         p2=p2+t2;
        //     }
        //     cout<<i<<"*"<<p1<<"*"<<p2<<endl;
            

        }
       // cout<<abs(p1-p2)<<endl;
       int s[n+10][2];
       for(int i=1;i<=n;i++)
       {
           int t1=0,t2=0;
           for(int j=1;j<=n;j++)
           {
               if(j<=n/2)
               {
                   p1=p1+(arr[i][j]-'0');
                   t1=t1+(arr[i][j]-'0');
               }
                
                else
                {
                    p2=p2+(arr[i][j]-'0');
                    t2=t2+(arr[i][j]-'0');
                }
           }
           s[i][0]=t1;
           s[i][1]=t2;
       }
       ll max=abs(p1-p2);
       for(int i=1;i<=n;i++)
       {
           ll temp=abs((p1-s[i][0]+s[i][1])-(p2-s[i][1]+s[i][0]));
           if(temp<max)
           max=temp;
       }
       cout<<max<<endl;
    }
}