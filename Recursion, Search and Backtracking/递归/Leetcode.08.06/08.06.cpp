class Solution {
public:
    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) 
    {
        int n = A.size();
        dfs(A, B, C, n);
        return;
    }
    void dfs(vector<int>& A, vector<int>& B, vector<int>& C, int x)
    {
        if(x == 1)
        {
            C.push_back(A.back());
            A.pop_back();
            return; //切勿忘记,是函数的出口
        }
        dfs(A, C, B, x - 1);  //1.将x上的n-1个盘子借助z移动到y柱子上
        C.push_back(A.back());//2.再将x的最后一个盘子移动到z上
        A.pop_back();
        dfs(B, A, C, x - 1);  //3.最后将y上的n-1个盘子借助x移动到z盘子上
    }
};