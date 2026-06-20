class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size(),mid;
        while(l<r)
        {
            mid=(l+r)/2;
            if(target==nums[mid])
            return mid;
            else if(target<nums[mid])
            {
                r=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        if(target>nums[mid])
        return mid+1;
        else
        return mid;
    }
};