class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        set<int>numSet;
        for(auto x:nums)
        {
            numSet.insert(x);
        }
        int longest=0;
        int length=0;
        for(int num:numSet)
        {

            if(!numSet.contains(num-1))
            {
                length=1;
                while(numSet.contains(num+length))
                {
                    length++;
                }
                if(length>longest)
                longest=length;
            }
        }
        return longest;
    } 
       
};