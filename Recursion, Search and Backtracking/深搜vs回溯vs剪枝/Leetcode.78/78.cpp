class Solution 
{
    vector<vector<int>> ret;
    vector<int> path;
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        dfs(nums, 0);
        return ret;
    }
    //解法一
    // void dfs(vector<int>& nums, int pos)
    // {
    //     //出口
    //     if(nums.size() == pos)
    //     {
    //         ret.push_back(path);
    //         return;
    //     }

    //     //选
    //     path.push_back(nums[pos]);
    //     dfs(nums, pos + 1);
    //     path.pop_back(); //递归完后恢复

    //     //不选
    //     dfs(nums, pos + 1);
    // }
    //解法二
    void dfs(vector<int>& nums, int pos)
    {
        ret.push_back(path);
        for(int i = pos; i < nums.size(); i++)
        {
            path.push_back(nums[i]);
            //进入下一层
            dfs(nums, i + 1);
            path.pop_back(); //恢复
        }
    }
};