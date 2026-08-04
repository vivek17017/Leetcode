class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int stock=prices[0],profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(stock<prices[i])
            {
                if(profit<(prices[i]-stock))
                profit=prices[i]-stock;
            }
            else
            {
                stock=prices[i];
            }
        }
        return profit;
    }
};