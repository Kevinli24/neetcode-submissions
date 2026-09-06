class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell = 0;
        int buy = 0;
        int maxprofit = 0;

        while (sell < prices.size())
        {
            if (prices[buy] < prices[sell])
            {
                int profit = prices[sell] - prices[buy];
                maxprofit = std::max(profit, maxprofit);
            }
            else
            {
                buy = sell;
            }
            ++sell;

        }
        return maxprofit;
    }
};
