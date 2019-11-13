#include <bits/stdc++.h>
#define ll long long int
#define fo(k,n) for(int i=k;i<n;i++)
// #define fo(k,m) for(int j=k;j<n;j++)
const long long int mod=100000007;
using namespace std;

int dp[201][201][201];
 ll n;
  int arr[201];
int f(int ii,int id,int i)
{
    if(i==n+1)
    return 0;

    if(dp[ii][id][i]!=-1)
    return dp[ii][id][i];

    int m=0;
    if(!ii || arr[i]>arr[ii])
    m=max(m,1+f(i,id,i+1));
    if(!id || arr[i]<arr[id])
    m=max(m,1+f(ii,i,i+1));
    m=max(m,f(ii,id,i+1));

    return m;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       
        cin>>n;
       
        fo(1,n+1)
        cin>>arr[i];
        memset(dp,-1,sizeof(dp));
        cout<<f(0,0,1)<<endl;
    }   
}