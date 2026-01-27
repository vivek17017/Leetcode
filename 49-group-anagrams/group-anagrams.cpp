class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        unordered_map<string,vector<string>>m;
        for(string e:strs)
        {
            string temp=e;
            sort(temp.begin(),temp.end());
            m[temp].push_back(e);
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            result.push_back(it->second);
        }
        return result;

    }
};