#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
ll maxx = 1e14;
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int a[n+1],ma[500];
    memset(ma,0,sizeof(ma));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ma[a[i]]=1;
    }

    cin>>m;
    int b[m+1],mb[500];
    memset(mb,0,sizeof(mb));
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        mb[b[i]]=1;
    }
int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ma[a[i]+b[j]]==0&&mb[a[i]+b[j]]==0)
            {
                cout<<a[i]<<" "<<b[j]<<endl;
                flag=1;
                break;
            }
        }
        if(flag==1)
        break;
    }

}