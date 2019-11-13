#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    ll arr[100010];
    cin>>t;
    while(t--)
    {
       // cout<<"ssds"<<endl;
        ll n;
        int flag=0;
        double avg=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        avg=accumulate(arr,arr+n,avg);
       
        avg/=(double)n;
       // cout<<avg<<"ssds"<<endl;
        for(int i=0;i<n;i++)
        {
            if(avg==(double)arr[i])
            {
                flag=1;
                cout<<i+1<<endl;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"Impossible"<<endl;
        }
        
    }
    return 0;
}