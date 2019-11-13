#include <bits/stdc++.h>
#define ll long long int
const long long int maxn = 2*1e8 + 2;
using namespace std;



int main()
{
    string a1,a2;
    while(cin>>a1>>a2)
    {
        //cout<<a1<<" "<<a2<<endl;
        int dp[a1.size()+2][a2.size()+2];
        string result;
        memset(dp,0,sizeof(dp));
        int i,j;
        for(i=0;i<=a1.size();i++)
        {
            for(j=0;j<=a2.size();j++)
            {
                if(i==0)
                dp[i][j]=j;

                else if(j==0)
                dp[i][j]=i;
                else
                {
                    if(a1[i-1]==a2[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                    else
                    dp[i][j]=1+(min(dp[i][j-1],dp[i-1][j]));
                    
                }
                
            }
        }
        
        i=a1.size();
        j=a2.size();
        while(i>0 && j>0)
        {
            if(a1[i-1]==a2[j-1])
            {
                result.push_back(a1[i-1]);
                i--;j--;
            }
            else
            {
                if(dp[i][j-1]>dp[i-1][j])
                {
                    result.push_back(a1[i-1]);
                    i--;
                }
                else
                {
                    result.push_back(a2[j-1]);
                    
                    j--;
                }
                
            }
            
        }
        while(i>0)
        {
            result.push_back(a1[i-1]);
            i--;
        }
        while(j>0)
        {
            result.push_back(a2[j-1]);
            j--;
        }
        reverse(result.begin(),result.end());
        cout<<result<<endl;
    }
}