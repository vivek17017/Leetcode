class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0)
        return 0;
        int l=0,r=height.size()-1,trap=0;
        int maxLeft=height[l],maxRight=height[r];
        while(l<r)
        {
            if(maxLeft<maxRight)
            {
                l++;
                maxLeft=max(maxLeft,height[l]);
                trap+=maxLeft-height[l];
            }
            else
            {
                r--;
                maxRight=max(maxRight,height[r]);
                trap+=maxRight-height[r];
            }
        }
        return trap;
    }

};