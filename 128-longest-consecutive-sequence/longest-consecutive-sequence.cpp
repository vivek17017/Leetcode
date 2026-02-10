class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        int max=0;
        if(nums.size()==0)
        return res;
        set<int>s1;
        for(auto x:nums)
        {
            s1.insert(x);
        }
        vector<int>result;
        for(auto x:s1)
        {
            result.push_back(x);
        }
        sort(result.begin(),result.end());
        for(int i=1;i<result.size();i++)
        {
            if(result[i]-result[i-1]==1)
            {
                res++;
                if(max<res)
                max=res;
            }
            else
            {
                if(max<res)
                {
                    max=res;
                }
                res=0;
            }
            
        }
        
        return max+1;
    }
};