#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;

const int maxn = 16;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                 for(int k=0;k<n;k++)
                 {
                     if(i!=k&&j!=k)
                     {
                         int h=(s[i]-'0')*100;
                         int t=(s[i]-'0')*10;
                         int z=s[i]-'0';
                         int num=h+t+z;
                         if(num%8==0)
                         {
                             flag=1;
                             break;
                         }
                     }
                 }
                 
            }
            if(flag==1)
                 break;
           
        }
        if(flag==1)
                 break;
    }
}