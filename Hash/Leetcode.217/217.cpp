class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int> hash;
        for(auto e : nums)
        {
            if(hash.count(e)) return true;
            else hash.insert(e);
        }
        return false;
    }
};