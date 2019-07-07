#include<stdio.h>
#include<string.h>
#include<iostream>
#include <cmath> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[1010];
        int d;
        cin>>d;
        cin>>s;
        float ans;
        ans=(0.75*d);
        int p=0;
        for(int i=0;i<d;i++)
        {
            if(s[i]=='P')
            {
                p++;
            }
        }
        ans=ans-p;
         int a;
         if(ans<0)
        {
            a=0;
        }
        else
        a = ceil(ans);
       
        int v=0;
         for(int i=2;i<d-2;i++)
        {
            if(s[i]=='A'&& (s[i-1]=='P'||s[i-2]=='P')&&(s[i+1]=='P'||s[i+2]=='P'))
            {
                v++;
            }
        }
        if(a>v)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
        

    }
   
}