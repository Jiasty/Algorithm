class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n = nums.size();
        vector<vector<int>> ret;
        sort(nums.begin(), nums.end());//1. 排序
        //2. 固定一个数，在这个数之后的区间寻找两数之和与其相加为0
        for(int i = 0;i < n - 2; i++)
        {
            //小优化:大于0的数之后不可能找到两数之和与其相加为0
            if(nums[i] > 0) break;

            //2.5 两数之和思想
            int left = i + 1, right = n - 1, target = -nums[i];
            while(left < right)
            {
                int sum = nums[left] + nums[right];
                if(sum > target)
                    right--;
                else if(sum < target)
                    left++;
                else
                {
                    ret.push_back({nums[i], nums[left++], nums[right--]});
                    //去重 left right 注意不要越界
                    while(left < right && nums[left] == nums[left - 1])
                        left++;
                    while(right > left && nums[right] == nums[right + 1])
                        right--;    
                }
            }
            //去重 i 注意不要越界
            while(i < left && nums[i] == nums[i + 1])
                i++;
        }
    //3. 返回结果
    return ret;
    }
};