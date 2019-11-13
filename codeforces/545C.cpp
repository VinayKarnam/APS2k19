#include <bits/stdc++.h>
#include <utility>
#define ll long long int
using namespace std;

const ll mod = 1000000007;
int main()
{
    int n;
    cin >> n;
    int x[n + 1], h[n + 1];
    for (int i = 0; i < n; i++)
        cin >> x[i] >> h[i];

    int dp[n + 1][3];
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[0][2] = 0;
    if (n == 1)
        cout << 1 << endl;
    else
    {
        for (int i = 1; i < n - 1; i++)
        {
            dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]);
            dp[i][1] = max(dp[i][1], dp[i - 1][1]);
            if (x[i] - x[i - 1] > h[i])
                dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]) + 1;
            else
                dp[i][0] = dp[i][1];
            if (x[i] - x[i - 1] - h[i - 1] > h[i])
                dp[i][0] = max(dp[i][0], dp[i - 1][2] + 1);
            if (x[i + 1] - x[i] > h[i])
            {
                int maxx = max(dp[i - 1][0], dp[i - 1][1]);
                maxx = max(dp[i - 1][2], maxx);
                dp[i][2] = maxx + 1;
            }
            else
                dp[i][2] = max(dp[i][0], dp[i][1]);
        }
        int maxx = max(dp[n - 2][0], dp[n - 2][1]);
        maxx = max(dp[n - 2][2], maxx);
        cout << maxx + 1 << endl;
    }
}