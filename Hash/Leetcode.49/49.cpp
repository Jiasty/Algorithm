class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        //判断两个字符串是否为字母异位词
        unordered_map<string, vector<string>> hash;
        for(auto& e : strs)
        {
            //e.sort() 排序分组
            string tmp = e;
            sort(tmp.begin(), tmp.end());
            hash[tmp].push_back(e);
        }
        //提取结果
        vector<vector<string>> ret;
        for(auto& [x, y] : hash) //注意写法
        {
            ret.push_back(y);
        }
        return ret;
    }
};