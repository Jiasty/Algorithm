class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> hash; //第一个int 为nums[i]，第二个为i，因为此题是要得到下标
        for(int i = 0; i < nums.size(); i++)
        {
            int x = target - nums[i]; // 去hash里找x
            if(hash.count(x)) return {hash[x], i};
            hash[nums[i]] = i; //用完这个数丢进hash表
        }
        //照顾编译器
        return {-1, -1};
    }
};