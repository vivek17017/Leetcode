class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int max=*max_element(costs.begin(),costs.end());
        vector<int> freq(max + 1, 0);
        for(int i=0;i<costs.size();i++)
        {
            freq[costs[i]]++;
        }
        int res=0,sum=0;
        for(int i=1;i<freq.size();i++)
        {
            int el=freq[i];
            while(el)
            {
                if(i>coins)
                break;
                el--;
                sum=sum+i;
                if(sum>coins)
                break;
                res++;
                
            }
            if(sum>=coins)
            break;
        }
        return res;


    }
};