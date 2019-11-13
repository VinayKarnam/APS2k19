#include<bits/stdc++.h>
#include <utility> 
#define ll long long int

using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+1];
        for(int i=0;i<n;i++)
        cin>>arr[i];

        ll tot=0;
        tot=accumulate(arr,arr+n,tot);

        ll dp[n+2][n+2],dp1[n+2][n+2];
        memset(dp,0,sizeof(dp));
        memset(dp1,0,sizeof(dp1));

        // cout<<"kjfskdjf"<<endl;
        for(int i=0;i<n;i++)
        {
            dp[i][i]=arr[i];
            dp1[i][i]=arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            dp[i][i+1]=max(arr[i],arr[i+1]);
            dp1[i][i+1]=max(arr[i],arr[i+1]);
        }
        for(int i=2;i<n;i++)
        {
            for(int j=0,k=i;k<n;k++,j++)
            {
                ll a1,a2,in,a3,a4;
                in=arr[j]>arr[k-1]?1:0;
                if(in)
                {
                    a1=dp[j+1][k-1]+arr[k];
                     a3=dp1[j][k-2]+arr[k];

                }
                
                else
                {
                    a1=dp[j][k-2]+arr[k];
                    a3=dp1[j+1][k-1]+arr[k];
                   
                    // cout<<dp1[j][k-2]<<" "<<arr[k]<<" "<<a4<<endl;
                }
                
               
                in=arr[j+1]>arr[k]?1:0;
                if(in)
                {
                    a2=dp[j+2][k]+arr[j];
                     a4=dp1[j+1][k-1]+arr[j];
                    // cout<<dp1[j+2][k]<<" "<<arr[j]<<" "<<a3<<endl;
                }
                
                else
                {
                 a2=dp[j+1][k-1]+arr[j];
                 a4=dp1[j+2][k]+arr[j];
                
                     //cout<<dp1[j][k-1]<<" "<<arr[j]<<" "<<a4<<endl;
                
                }
                   //  cout<<a1<<" "<<a2<<endl;
                dp[j][k]=max(a1,a2);
                dp1[j][k]=max(a3,a4);
                
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<dp1[i][j]<<" ";
            }
            cout<<endl;
        }

        // ll sum1=0,sum2;
        // for(int i=0;i<n/2;i++)
        // sum1=sum1+max(arr[i],arr[n-i-1]);

        cout<<dp1[0][n-1]<<" "<<dp[0][n-1]<<endl;
    }
}