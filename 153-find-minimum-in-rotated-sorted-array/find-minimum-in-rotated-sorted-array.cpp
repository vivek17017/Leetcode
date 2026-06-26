class Solution {
public:
    int findMin(vector<int>& nums) {
        int beg=0,end=nums.size()-1;
        while(nums[beg]>nums[end])
        {
            int mid=beg+(end-beg)/2;
            if(nums[beg]<=nums[mid])
            beg=mid+1;
            else
            end=mid;
        }
        return nums[beg];
    }
};