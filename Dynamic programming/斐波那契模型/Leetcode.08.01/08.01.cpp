const int mod = 1000000007;
class Solution {
public:
    int waysToStep(int n) 
    {
         //特殊情况
        if(n == 1 || n == 2)
            return n;
        if(n == 3)
            return 4;

        //利用滚动数组
        int s1 = 1, s2 = 2, s3 = 4, si = 0;
        for(int i = 4;i <= n;i++)
        {
            //s1 s2 s3 每个数都可能很大，所以两个相加就取一次模
            si = ((s1 + s2) % mod + s3) % mod;
            s1 = s2;
            s2 = s3;
            s3 = si;
        }
        return si;
    }
};