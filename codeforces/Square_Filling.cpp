#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;
const ll maxx=99999999;
int main()
{
    int n,m;
    cin>>n>>m;
    int tot=0;
    int a[60][60],b[60][60];
    memset(b,0,sizeof(b));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            tot+=a[i][j];
        }
    }
int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if(a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1]==4)
            {
                b[i][j]=b[i][j+1]=b[i+1][j]=b[i+1][j+1]=1;
                count++;
            }
        }
    }
    int tot2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           
            tot2+=b[i][j];
        }
    }

    if(tot==tot2)
    {
        if(tot==0)
        cout<<"0"<<endl;
        else
        {
            cout<<count<<endl;
            for(int i=0;i<n-1;i++)
            {
                for(int j=0;j<m-1;j++)
                {
                    if(a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1]==4)
                    {
                        cout<<i+1<<" "<<j+1<<endl;
                    }
                }
            }
        }
        
    }
    else
    cout<<"-1"<<endl;
}