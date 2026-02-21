class Solution {
public:
    int trap(vector<int>& height) {
        int trap=0;
        int l=0,r=height.size()-1,level=0,sublevel=0;
        
        while(l<r)
        {
            while(height[l]==0 && l<r)
            l++;
            while(height[r]==0 && l<r)
            r--;
            sublevel=level;
            level=min(height[l],height[r]);
            for(int i=l+1;i<r;i++)
            {
                if(level>=height[i])
                {
                    if(sublevel<=height[i])
                    {
                        trap+=(level-height[i]);
                    }
                    else
                    {
                        trap=trap+(level-sublevel);
                    }
                }
            }
            while(l<r && height[l]<=level)
            {
                l++;
            }
            while(l<r && height[r]<=level)
            {
                r--;
            }
        }
        return trap;
    }
};