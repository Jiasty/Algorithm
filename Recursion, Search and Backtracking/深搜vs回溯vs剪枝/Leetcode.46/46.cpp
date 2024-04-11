class Solution 
{
    vector<vector<int>> ret;
    vector<int> path; //记录当前路径
    bool check[7]; //检查当前层数字是否用过 1 <= nums.length <= 6
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        dfs(nums);
        return ret;
    }

    void dfs(vector<int>& nums)
    {
        //出口
        if(nums.size() == path.size())
        {
            ret.push_back(path);
            return;
        }

        for(int i = 0; i < nums.size(); i++)
        {
            if(check[i] == false)
            {
                path.push_back(nums[i]);
                check[i] = true;
                dfs(nums);
                //回溯
                path.pop_back();
                check[i] = false;
            }
        }
    }
};