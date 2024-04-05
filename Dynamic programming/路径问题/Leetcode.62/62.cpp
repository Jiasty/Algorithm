class Solution 
{
public:
    int uniquePaths(int m, int n) 
    {
        //多开一行一列并合理初始化
        vector<vector<int>> dp(m + 1,vector<int>(n + 1));
        dp[0][1] = 1;

        for(int i = 1;i <= m;i++) //行
            for(int j = 1;j <= n;j++) //列
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];

        return dp[m][n];
    }
};