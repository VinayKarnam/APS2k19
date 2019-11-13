#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],lis[n],lds[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int max=0;
        for(int i=0;i<n;i++)
        {
            lis[i]=1;
            //lds[i]=1;
            for(int j=0; j<i;j++)
            {
                if(arr[i]>arr[j] && lis[j]+1>lis[i])
                lis[i]=lis[j]+1;
            }
            //cout<<lis[i]<<" ";
        }
        //cout<<endl;
        for(int i=n-1;i>=0;i--)
        {
            lds[i]=1;
            //lds[i]=1;
            for(int j=n-1; j>i;j--)
            {
              //  cout<<arr[i]<<" "<<arr[j]<<endl;
                if(arr[i]>arr[j] && lds[j]+1>lds[i])
                lds[i]=lds[j]+1;
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<lds[i]<<" ";
            
        // }
        // cout<<endl;

        for(int i=0;i<n;i++)
        {
            if(lis[i]+lds[i]-1>max)
            max=lis[i]+lds[i]-1;
        }
        cout<<max<<endl;
    }

}