#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;
const ll maxx=99999999;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int b,p,f;
        cin>>b>>p>>f;
        int h,c;
        cin>>h>>c;
        int profit;
        if(h>c)
        {
            profit=h*(min(b/2,p));
            b=b-(2*(min(b/2,p)));
            if(b>0)
            {
                profit+=c*(min(b/2,f));
            }
        }
        else
        {
            profit=c*(min(b/2,f));
            b=b-(2*(min(b/2,f)));
            if(b>0)
            {
                profit+=h*(min(b/2,p));
            }
        }
        cout<<profit<<endl;
    }
    
}