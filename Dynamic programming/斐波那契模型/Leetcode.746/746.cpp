class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        //状态表示，dp表示到达该位置的最小花费
        int n = cost.size();
        vector<int> dp(n + 1);
        for(int i = 2;i <= n;i++)
            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        //fmin是浮点型使用
        return dp[n];
    }
};