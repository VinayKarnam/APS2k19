#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
ll maxx = 1e14;
using namespace std;

ll NcR(int n, int r) 
{ 

   unsigned ll p = 1, k = 1; 
 
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
  

            unsigned ll m = __gcd(p, k); 
  
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
    
    } 
  
    else
        p = 1; 
    return p;
} 
int main()
{
   
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n+1];
        for(int i=0;i<n;i++)
        cin>>arr[i];

        sort(arr,arr+n);
        //ll sum=0;
        int count=0,count1=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[k-1])
            {
                if(i<k)
                count1++;
                else
                count++;
            }   
        }
       //cout<<f[49]<<" "<<count1<<endl;
        cout<<NcR(count1+count,count1)<<endl;
        //cout<<count<<endl;
    }
}