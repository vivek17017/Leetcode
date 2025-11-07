class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m1;
        vector<vector<string>>result;
        string sorted;
        for(auto x:strs)
        {
            sorted=x;
            sort(sorted.begin(),sorted.end());
            m1[sorted].push_back(x);

        }
        for(auto x :m1)
            result.push_back(x.second);
        return result;
        
    }
};