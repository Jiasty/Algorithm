class Solution {
public:
    double myPow(double x, int n) 
    {
        return n < 0 ? 1.0 / Pow(x, -(long long)n) : Pow(x, n);
    }
    //强转为long long是因为当n = -2^31时，n接收到2^31，存不下，得强转
    double Pow(double x, long long n)
    {
        //利用快速幂算法快速求解
        if(0 == n) return 1.0;

        double tmp = Pow(x, n / 2);
        return n % 2 == 0 ? tmp * tmp : tmp * tmp *  x;
    }
};