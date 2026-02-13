class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        vector<int>res;
        while(l<r)
        {
            if(numbers[l]+numbers[r]==target)
            {
                res.push_back(l+1);
                res.push_back(r+1);
                return res;
            }
            else
            {
                if(numbers[l]<target-numbers[r])
                l++;
                if(numbers[r]>target-numbers[l])
                r--;
                
            }
        }
        return res;
    }
};