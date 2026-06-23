class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max=*max_element(piles.begin(),piles.end());
        if(h==piles.size())
        return max;
        
        int beg=1,end=max,mid;
        while(beg<end)
        {
            mid=beg+(end-beg)/2;
            int sum=0;
            for(int i=0;i<piles.size();i++)
            {
                if(piles[i]%mid==0)
                sum+=piles[i]/mid;
                else
                sum+=piles[i]/mid+1;
            }
            cout<<sum<<" ";
            if(sum==h)
            end= mid;
            else if(sum>h)
            {
                beg=mid+1;
            }
            else
            end=mid;
        }
        return beg;
    }
};