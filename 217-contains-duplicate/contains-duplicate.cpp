class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {


        set<int>s1;
        for(int i=0;i<nums.size();i++)
        s1.insert(nums[i]);
        if(nums.size()==s1.size())
            return false;
        else
            return true;
    }
};