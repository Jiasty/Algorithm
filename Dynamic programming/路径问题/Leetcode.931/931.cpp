class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        //dp[i][j]表示到达该位置的最小和
        int n = matrix.size();
        //初始化操作，先全为最大，再将第一行改为0
        vector<vector<int>> dp(n + 1, vector<int>(n + 2, INT_MAX));
        for(int j = 0; j < n + 2; j++)
            dp[0][j] = 0;
        //填表
        for(int i = 1; i < n + 1; i++)
            for(int j = 1; j < n + 1; j++)
            {
                dp[i][j] = min(min(dp[i - 1][j], dp[i - 1][j + 1]), dp[i - 1][j - 1]) 
                            + matrix[i - 1][j - 1];
                //注意原始矩阵的坐标!!!
            }
        //在dp中最后一行找最小值
        int min = dp[n][1];
        for(int j = 2; j < n + 1; j++)
        {
            if(dp[n][j] < min)
                min = dp[n][j];
        }
        return min;
    }
};