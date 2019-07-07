#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


#include<algorithm>
#include <cmath>
/*
 * Complete the 'minSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY num
 *  2. INTEGER k
 */
using namespace std;
int minSum(vector<int> num, int k) {

    make_heap(num.begin(),num.end());
    int ans=0,temp;
    while(k--)
    {
        temp=num.front();
        pop_heap(num.begin(),num.end());
        num.pop_back();
        double x=temp;
        x=x/2.0;
        temp=(int)round(x);
        num.push_back(temp);
    }

    ans=accumulate(num.begin(), num.end(), ans);
    return ans;



}

int main()
{
    
}