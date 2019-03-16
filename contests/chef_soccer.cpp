#include <iostream>
#include <queue>
#include<math.h>
using namespace std;
int main()
{
    int t;
    long int di=pow(10,9)+7;
    cin >> t;
    while (t--)
    {

        int n, nn;
        cin >> n;
        nn = n;
        //cout<<n<<endl;
        vector<int> v;
        int count = 1;
        while (nn--)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        queue<pair<int, int>> q;

        auto p = make_pair(1, 2);
        q.push(p);
        if (v[0] == 2)
        {
            auto p = make_pair(1, 3);
            q.push(p);
        }
        for (int i = 1; i < n; i++)
        {
            queue<pair<int, int>> q1;
            // cout<<q<<endl;
            while (q.size() > 0)
            {
                auto p = q.front();
              //   cout<<p.first<<"#"<<p.second<<" ";
                if (p.first > p.second)
                {
                    if (v[p.second-1] == 2)
                    {
                        auto p1 = make_pair(p.second, p.second + 2);
                        if (p.second + 2 <= n)
                            q1.push(p1);
                    }
                }
                else
                {

                    if (p.first == (p.second - 2))
                    {
                        auto p1 = make_pair(p.second, p.second - 1);
                        q1.push(p1);
                    }
                    auto p2 = make_pair(p.second, p.second + 1);
                    if (p.second + 1 <= n)
                        q1.push(p2);
                    if (v[p.second - 1] == 2)
                    {
                        auto p1 = make_pair(p.second, p.second + 2);
                        if (p.second + 2 <= n)
                            q1.push(p1);
                    }  

                    if(p.first==p.second-2 && p.second+1<=n && v[p.second]==2)
                    {
                        count=(count+1)%di;
                    }
                    
                }
                q.pop();
                count=(count+1)%di;
            }
             //cout<<"\n";
            q.swap(q1);
        }

        cout << count << endl;
    }
}