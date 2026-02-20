class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,prod,maxArea=0;
            while(i<j)
            {
                prod=min(height[i],height[j])*(j-i);
                maxArea=max(prod,maxArea);
                if(height[i]<height[j])
                i++;
                else
                j--;
                
            }
        
        return maxArea;
    }
};