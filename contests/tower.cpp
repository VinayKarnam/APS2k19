#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int k;
    cin>>k;
   int m;
    cin>>m;
    int arr[100010];
    for(int z=0;z<m;z++)
    {
        cin>>arr[z];
    }
    int r=0;
    int i=0;
    while(i<m-1)
    {
        int prev=i;
        i=i+k-1;
        cout<<i<<endl;
        if(i<m-1)
        {
           for(int j=i;j>prev;j--)
           {
               if(arr[j]>arr[j-1] && arr[j]>arr[j+1])
               {
                   r++;
                   i=j;
                   break;
               }
           }
        }

    }

    cout<<r<<endl;
    return 0;
}

