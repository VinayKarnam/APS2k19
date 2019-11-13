#include <bits/stdc++.h>
#define maxp 1010
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int price[k + 1];
        for (int i = 1; i < k + 1; i++)
        {
            cin >> price[i];
        }
        int dp[k + 1];
        dp[0] = 0;
        for (int i = 1; i <= k; i++)
            dp[i] = maxp;

        for (int i = 1; i <= k; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                if (j <= i && price[j] != -1)
                {
                    dp[i] = min(dp[i], price[j] + dp[i - j]);
                }
            }
        }
        if (dp[k] == maxp)
            cout << "-1" << endl;

        else
        {
            cout << dp[k] << endl;
        }
    }
}