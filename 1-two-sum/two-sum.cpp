class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]+nums[j]==target)
        //         {
        //             result.push_back(i);
        //             result.push_back(j);
        //         }
        //     }
        // }
        // return result;
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++)
        {
           int diff=target-nums[i];
           if(!map.contains(diff))
           {
            map[nums[i]]=i;
           }
           else
           {
            result.push_back(map[diff]);
            result.push_back(i);
            return result;
           }
        }
        return result;

    }
};