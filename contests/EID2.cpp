#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
ll maxx = 1e14;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=1;
        int a[4],c[4];
        for(int i=0;i<3;i++)
        cin>>a[i];

        for(int i=0;i<3;i++)
        cin>>c[i];

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i!=j)
                {
                    if(a[i]<a[j]&&c[i]>c[j])
                    {
                        flag=0;
                        break;
                    }
                    else if(a[i]>a[j]&&c[i]<c[j])
                    {
                        flag=0;
                        break;
                    }
                    else if(a[i]==a[j]&&c[i]!=c[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==0)
                break;
            }
        }
        if(flag==0)
        cout<<"NOT FAIR"<<endl;
        else
        {
            cout<<"FAIR"<<endl;
        }
        
    }
}