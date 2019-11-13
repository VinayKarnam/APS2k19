#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        double each = (double)k / (double)n;
        //cout<<each<<endl;
        if (k % n == 0)
        {
            cout << "0" << endl;
        }
        else
        {
        //     double c = ceil(each) - each;
        //     double f = each - floor(each);
        //     double ratio;
        //  //  cout << c << " " << f << endl;
        //     if ((c / f) > (f / c))
        //     {
        //         ratio = c / f;
        //     }
        //     else
        //     {
        //         ratio = f / c;
        //     }
        //    // cout << ratio << endl;
        //     double num1 = n * (ratio / (ratio + 1));
        //     double num2 = n * (1 / (ratio + 1));
            
        //     if (num1 == num2)
        //     {
        //         cout << (int)((2 * num1) - 1) << endl;
        //     }
        //     else
        //     {
        //         //cout << min(num1,num2)<< endl;
        //         cout << (int)2*(min(num1, num2)) << endl;
        //     }

            ll extra = k%n;
            if(extra == (n-extra))
            {
                cout<<(2*extra)-1<<endl;
            }
            else
            {
                cout<<2*min(extra,n-extra)<<endl;
            }
            
        }
    }
}