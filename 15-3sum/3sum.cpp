class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j,sum,k;
        vector<vector<int>>result;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                break;
            if(i>0 && nums[i]==nums[i-1])
            continue;
            k=nums.size()-1;
            j=i+1;
            while(j<k)
            {
                sum=nums[i]+nums[j]+nums[k];
                if(sum<0)
                j++;
                else if(sum>0)
                k--;
                else
                {
                    result.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])
                    {
                        j++;
                    }
                 
                }
            }
        }
        return result;
    }
};