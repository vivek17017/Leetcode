class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m1;
        vector<int>result;
        for(int i=0;i<nums.size();i++)
        {
            m1[nums[i]]++;
        }
        int key;
        
        for(int i=0;i<k;i++)
        {
            int max_frequency=0;
            for(auto x:m1)
            {
                if(max_frequency<x.second){
                    max_frequency=x.second;
                    key=x.first;
                }
                
            }
            result.push_back(key);
            m1.erase(key);
        }
        return result;
        
    }
};