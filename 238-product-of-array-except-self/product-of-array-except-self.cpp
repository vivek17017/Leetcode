class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        vector<int>prefix;
        vector<int>suffix(n);
        int prod=1;
        for(int i=0;i<nums.size();i++)
        {
            prefix.push_back(prod);
            prod=prod*nums[i];
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            suffix[i]=prod;
            prod=prod*nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            res.push_back(prefix[i]*suffix[i]);
        }
        return res;
    }
};