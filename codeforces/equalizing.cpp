#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
ll maxx = 1e14;
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> arr(n+1,{0,0});
    unordered_map<int,int> m;
   int f;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i].first;
        m[arr[i].first]+=1;
        f=min(m[arr[i].first],k);

    }
    //cout<<f<<endl;
    if(f>=k)
    cout<<"0"<<endl;
    else
    {
         
        for(int i=1;i<=n;i++)
        {
            if((arr[i].first%2)==1)
            {
                //arr[i].first=arr[i].first/2;
                arr[i].second=1;
            }
        }
        
        sort(arr.begin(),arr.end());
    //    for(int i=0;i<=n;i++)
    //     {
    //         cout<<arr[i].first<<" "<<arr[i].second<<endl;
    //     }
        int a[n+10];
        memset(a,0,sizeof(a));
        for(int i=0;i<=n-k;i++)
        {
            a[i]+=arr[i].second;
            //if(arr[i].first%2)
            for(int j=i+1;j<i+k;j++)
            {
                a[i]=a[i]+arr[j].second;
                a[i]+=(arr[j].first/2-arr[i].first/2);
            }
        }
        for(int j=n-k+1;j<=n;j++)
        {
            a[j]=INT_MAX;
        }
        cout<<*min_element(a,a+n+1);

    }
    

}