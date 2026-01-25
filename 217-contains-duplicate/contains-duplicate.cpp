class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>a;
        a.insert(nums.begin(),nums.end());
        return(a.size()!=nums.size());
        
    }
};