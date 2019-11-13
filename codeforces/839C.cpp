#include <bits/stdc++.h>
#include <utility>
#define ll long long int
using namespace std;
#define maxn 100000
#define ld long double
vector<int> g[maxn];
const ll mod = 1000000007;
int n;

ld dfs(int v,int p)
{
    ld sum=0;
    for(auto u : g[v])
    {
        if(u!=p)
        sum+=dfs(u,v)+1;
    }
    return sum?sum/(g[v].size()-(p!=-1)):0;
}
int main()
{
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cout << fixed << setprecision(7) << dfs(1,-1) << '\n';
}