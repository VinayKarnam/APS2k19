#include<bits/stdc++.h>
#include <utility> 
#define ll long long int
using namespace std;
const ll maxx=99999999;
int main()
{
    ll z=0;
    while(1)
    {
        z++;
        string s;
        cin>>s;
        if(s=="bye")
        break;
        int pre[s.size()+10],suf[s.size()+10],arr[s.size()+10];
        for(int i=0;i<s.size();i++)
        arr[i]=s[i]-'0';
        pre[0]=arr[0];
        for(int i=1;i<s.size();i++)
        {
            pre[i]=pre[i-1]+arr[i];
            
        }
        

        suf[s.size()-1]=arr[s.size()-1];
        for(int i=s.size()-2;i>=0;i--)
        {
            suf[i]=suf[i+1]+arr[i];
           // cout<<suf[i]<<" ";
        }
       // cout<<endl;
        int count=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(pre[i]<=suf[i+1])
            count++;
            for(int j=i-1;j>=0;j--)
            {
                if(pre[i]-pre[j]<=suf[i+1])
                count++;
            }
            cout<<arr[i]<<" "<<pre[i]<<" "<<suf[i+1]<<" "<<count<<endl;

        }
        cout<<z<<". "<<count<<endl;


    }
}