#include <bits/stdc++.h>
#include <utility>
#define ll long long int
using namespace std;
#define maxn 100000
#define ld long double
const ll mod = 1000000007;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int q;
    cin>>q;
    vector<set<int>> pos(26);
    for(int i=0;i<n;i++)
    {
        pos[s[i]-'a'].insert(i);
    }
    while(q--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            int p;char c;
            cin>>p>>c;
            p--;
            pos[s[p]-'a'].erase(p);
            s[p]=c;
            pos[c-'a'].insert(p);
        }
        else
        {
            int l,r;
            cin>>l>>r;
            l--;r--;
            int c=0;
            for(int i=0;i<26;i++)
            {
                auto it=pos[i].lower_bound(l);
                if(it!=pos[i].end()&&*it<=r)c++;
            }
            cout<<c<<endl;
        }
        
    }   
}