class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int, int> hash; //不能存重复元素的hash表，此题可以覆盖
        for(int i = 0; i < nums.size(); i++)
        {
            if(hash.count(nums[i]) && i- hash[nums[i]] <= k) //i > hash[nums[i]] 所以不用abs
                return true;
            hash[nums[i]] = i; //此题是<= k
        }
        return false;
    }
};