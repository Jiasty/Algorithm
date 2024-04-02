int tribonacci(int n)
{
    //动态规划问题解体步骤：
    //1.状态表示
    //2.状态转移方程
    //3.初始化解决边界情况
    //4.返回结果
    int dp1 = 0, dp2 = 1, dp3 = 1, dpi = 0;

    //初始化,特殊情况
    if(n == 0)
        return 0;
    if(n == 1 || n == 2)
        return 1;
    
    for(int i = 3; i <= n; i++)
    {
        dpi = dp1 + dp2 + dp3;
        //滚动数组优化空间
        dp1 = dp2;
        dp2 = dp3;
        dp3 = dpi;
    }

    return dpi;
}