class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1)
        return x;
        int beg=1,end=x;
        while(beg<=end)
        {
            int mid=beg+(end-beg)/2;
            if((long)mid*mid>(long)x)
            end=mid-1;
            else if(mid*mid==x)
            return mid;
            else
            beg=mid+1;
        }
        return end;
    }
};