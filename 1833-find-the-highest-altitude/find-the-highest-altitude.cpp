class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res=0,sum;
        for(int i=0;i<gain.size();i++)
        {
            sum=sum+gain[i];
            if(sum>res)
            {
                res=sum;
            }
        }
        return res;
    }
};