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
        int n,k;
        cin>>n>>k;
        int arr[n+3];
        for(int i=1;i<=n;i++)
        cin>>arr[i];
        // for(int i=1;i<=n;i++)
        // cout<<arr[i]<<" ";
       // cout<<endl;
        arr[0]=2;
        arr[n+1]=2;
       // int res[n+3];
        int flag=0;
        if(k==2)
        {
            for(int i=1;i<=n+1;i++)
            {
                if(arr[i]!=-1)
                {
                    if(i%2)
                    arr[0]=(arr[i]==1?2:1);
                
                    else
                    {
                       arr[0]=(arr[i]==1?1:2);
                    }
                        break;
                    
                }
            }
            for(int i=1;i<=n;i++)
            {
               // res[i]=arr[i];
                if(arr[i]==-1)
                {
                    //arr[i]=(arr[i-1]+1)%3;
                    arr[i]=(arr[i-1]==1?2:1);
                    
                }
                if(arr[i]==arr[i-1])
                {
                    flag=1;
                    break;
                }
                //cout<<arr[i]<<endl;
            }
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                
                if(arr[i]==-1)
                {
                    for(int j=1;j<=k;j++)
                    {
                        if(j!=arr[i-1]&&j!=arr[i+1])
                        {
                            arr[i]=j;
                            break;
                        }
                    }
                }
            }
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i++)
            cout<<arr[i]<<" ";
            cout<<endl;
        }
        
        
    }
}