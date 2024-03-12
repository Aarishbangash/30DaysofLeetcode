class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int i;
      int min_price= prices[i];
        int max_profit=0;
        for(i=0;i<prices.size();i++)
        {
            if(prices[i]<min_price)
                min_price=prices[i];
            
        else if ((prices[i]- min_price) > max_profit)
             max_profit=prices[i]- min_price;
        }
        return max_profit;
    }
};