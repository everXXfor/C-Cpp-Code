#include<bits/stdc++.h>
#include<cstring> // memset()
using namespace std;
class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m+1][n+1];
        memset(dp, 0, sizeof dp);
        dp[1][1] = 1;
        for (int i = 1;i <= m;i++)
        {
            for (int j = 1;j <= n;j++)
            {
                if (i == 1 && j == 1)
                    continue;
                    // if (dp[i][j] == 0)
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m][n];
    }
};
int main( )
{
    Solution so;
    int m, n;
    m = 3;
    n = 3;
    cout << so.uniquePaths(m, n) << endl;
}