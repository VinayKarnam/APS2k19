#include <bits/stdc++.h>
#include <utility>
#define ll long long int
using namespace std;
#define maxn 100000
#define ld long double
const ll mod = 1000000007;


bool isSubsetSum(vector<ll> set, int n, int sum) 
{ 
    // The value of subset[i][j] will be true if there is a  
    // subset of set[0..j-1] with sum equal to i 
    bool subset[n+1][sum+1]; 
   
    // If sum is 0, then answer is true 
    for (int i = 0; i <= n; i++) 
      subset[i][0] = true; 
   
    // If sum is not 0 and set is empty, then answer is false 
    for (int i = 1; i <= sum; i++) 
      subset[0][i] = false; 
   
     // Fill the subset table in botton up manner 
     for (int i = 1; i <= n; i++) 
     { 
       for (int j = 1; j <= sum; j++) 
       { 
         if(j<set[i-1]) 
         subset[i][j] = subset[i-1][j]; 
         if (j >= set[i-1]) 
           subset[i][j] = subset[i-1][j] ||  
                                 subset[i - 1][j-set[i-1]]; 
       } 
     } 
   
     /*   // uncomment this code to print table 
     for (int i = 0; i <= n; i++) 
     { 
       for (int j = 0; j <= sum; j++) 
          printf ("%4d", subset[i][j]); 
       printf("\n"); 
     }*/
   
     return subset[n][sum]; 
} 

int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        vector<ll> arr;
        ll t;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            if(t<=2048)
            arr.push_back(t);
        }
        bool ans=isSubsetSum(arr,arr.size(),2048);
        if(ans)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}