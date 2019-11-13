#include <bits/stdc++.h>
#include <utility>
#define ll long long int
using namespace std;

const int maxn = 16;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int flag = 0;

    for(int i=0;i<n;i++)
    {
        if((s[i]-'0')%8==0)
        {
            flag=1;
            cout<<"YES"<<endl;
            cout<<s[i]<<endl;
            break;
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        if(flag==1)
        break;
        for(int j=i+1;j<n;j++)
        {
            int nn=(s[i]-'0')*10+(s[j]-'0');
            //cout<<s[i]<<s[j]<<endl;
            if(nn%8==0)
            {
                flag=1;
                cout<<"YES"<<endl;
                cout<<s[i]<<s[j]<<endl;
                break;
            }
        }
    }

    for (int i = n; i >= 0; i--)
    {
        if (flag == 1)
            break;
        for (int j = i + 1; j < n; j++)
        {
            if (flag == 1)
                break;
            for (int k = j + 1; k < n; k++)
            {
                int h = (s[i] - '0') * 100;
                int t = (s[j] - '0') * 10;
                int z = s[k] - '0';
                int num = h + t + z;
                if (num % 8 == 0)
                {
                    flag = 1;
                    cout << "YES" << endl;
                 
                    cout << s[i]<<s[j] << s[k] << endl;
                    break;
                }
            }
        }
    }

    if (flag == 0)
    {
        cout << "NO" << endl;
    }
}