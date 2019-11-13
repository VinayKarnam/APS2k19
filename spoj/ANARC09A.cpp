#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t=0;
    while(1)
    {
        char str[2010];
        cin>>str;
        t++;
        if(str[0]=='-')
        break;
        vector<char> v;
        for(int i=0;i<strlen(str);i++)
        {
            if(v.size()==0)
            v.push_back(str[i]);
            else
            {
                if(v[v.size()-1]=='{'&&str[i]=='}')
                {
                   // cout<<v[i];
                    v.pop_back();
                }
                
                else
                {
                    v.push_back(str[i]);
                }
                
            }
            
        }
        int open=0,close=0;
        for(int i=0;i<v.size();i++)
        {
            //cout<<v[i];
            if(v[i]=='{')
            open++;
            else
            close++;
        }
        cout<<t<<"."<<" "<<(open/2)+(close/2)+(2*(open%2))<<endl;
    }
}