#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        char str[n+1];
        cin>>str;
        ll pre[256][n+10];
        memset(pre,0,sizeof(pre));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<256;j++)
            {
                if(str[i]!=j)
                pre[j][i+1]=pre[j][i];
                else
                {
                    pre[str[i]][i+1]=pre[str[i]][i]+1;
                   // cout<<str[i]<<" "<<pre[str[i]][i+1]<<" "<<i<<endl;
                    break;
                }
                
            }
        }
        
        while(q--)
        {
            ll l,r;
            int flag=0;
            cin>>l>>r;
            if(r-l+1<3)
            cout<<"NO"<<endl;
            else
            {
                for(int i=0;i<256;i++)
                {
                    for(int j=l;j<=r;j++)
                    {
                        for(int k=l;k<=j;k++)
                        {
                            ll temp=pre[i][j]-pre[i][k-1];
                            if(temp>(j-k+1)/2 && (j-k+1)>2)
                            {
                                flag=1;
                                cout<<"YES"<<endl;
                                //cout<<pre[i][k]<<" "<<i<<" "<<k<<"*"<<j<<endl;
                                break;
                            }
                        }
                        if(flag==1)
                         break;
                    }
                    if(flag==1)
                    break;
                }
                
            }
            if(flag==0)
            cout<<"NO"<<endl;
            
        }

    }
}