#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[100010];
        cin>>s;
        int count=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='1')
            count++;
        }
        if(count%2!=0)
        cout<<"WIN"<<endl;
        else
        cout<<"LOSE"<<endl;
    }
}
