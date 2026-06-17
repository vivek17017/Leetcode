class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0,m=matrix.size(),mid1;
        while(l<m)
        {
            mid1=(l+m)/2;
            if(target==matrix[mid1][0])
            return true;
            else if(target>matrix[mid1][0])
            {
                l=mid1+1;
            }
            else
            {
                m=mid1;
            }
            int r=0,n=matrix[mid1].size(),mid2;
            while(r<n)
            {
                mid2=(r+n)/2;
                if(target==matrix[mid1][mid2])
                return true;
                else if(target>matrix[mid1][mid2])
                {
                    r=mid2+1;
                }
                else
                {
                    n=mid2;
                }
            }

        }
        return false;
    }
};