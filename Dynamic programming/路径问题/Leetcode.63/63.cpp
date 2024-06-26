class Solution 
{
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n+1));
        dp[0][1] = 1;

        for(int i = 1;i <= m;i++) //行
            for(int j = 1;j <= n;j++) //列
                if(obstacleGrid[i - 1][j - 1] == 0) //注意映射关系，且为0才填表
                    dp[i][j] = dp[i][j - 1] + dp[i - 1][j];

        return dp[m][n];
    }
};