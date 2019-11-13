// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;


// int main()
// {   
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n],prefix[n];
//         ll sum=0;
//         for(int i=0;i<n;i++)
//         cin>>arr[i];
//         unordered_map<int,int> m,m1;
        
//         prefix[0]=arr[0];
//         m[arr[0]]=0;
//         m1[arr[0]]=1;
//         //cout<<prefix[0]<<" "<<m[prefix[0]].at(0)<<" "<<0<<endl;
//         for(int i=1;i<n;i++)
//         {
//             prefix[i]=prefix[i-1]^arr[i];
//             auto itr=m.find(prefix[i]);
//             if(itr!=m.end())
//             {
//                 itr->second+=i;
//                 m1[prefix[i]]=m1[prefix[i]]+1;
//             }
            
//             else
//             {
//                 m[prefix[i]]=i;
//                 m1[prefix[i]]=1;
//             }
            
//             //cout<<prefix[i]<<" "<<m[prefix[i]]<<" "<<i<<endl;
//         }
//         int prev=0;
//         for(int i=0;i<n-1;i++)
//         { 
               
//            auto  itr=m.find(prev);
             
//             if(itr!=m.end() && m1[prev]>0)
//             {
//                 //cout<<i<<" "<<prefix[i]<<" "<<m[prev]<<" "<<m1[prev]<<" "<<n<<endl;
//                 sum=sum+itr->second-(i*m1[prev]);   
//             }
//              m[prefix[i]]-=i;
//                 m1[prefix[i]]=m1[prefix[i]]-1;
//             prev=prefix[i];
            
             
//         }
//         cout<<sum<<endl;
//     }
// }


#include<bits/stdc++.h>
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
        int arr[n],prefix[n];
        ll sum=0;
        for(int i=0;i<n;i++)
        cin>>arr[i];
        map<int,vector<int>> m;
        m[arr[0]].push_back(0);
        prefix[0]=arr[0];
        //cout<<prefix[0]<<" "<<m[prefix[0]].at(0)<<" "<<0<<endl;
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]^arr[i];
            m[prefix[i]].push_back(i);
           // cout<<prefix[i]<<" "<<m[prefix[i]].at(m[prefix[i]].size()-1)<<" "<<i<<endl;
        }
        int prev=0;
        for(int i=0;i<n-1;i++)
        {
            
            auto itr=m.find(prev);
            if(itr!=m.end())
            {
                for(int j=0;j<itr->second.size();j++)
                {
                   // cout<<prev<<" "<<itr->second[j]<<endl;
                    if(itr->second[j]>i)
                    {
                        
                        sum=sum+itr->second[j]-i;
                    }
                }
            }
            prev=prefix[i];
        }
        cout<<sum<<endl;
    }
}