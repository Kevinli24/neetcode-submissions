class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int maxprofit = 0;

        for (int& maxprice : prices)
        {
            maxprofit = std::max(maxprofit, maxprice - minprice);
            minprice = std::min(minprice, maxprice);
        }

        return maxprofit;
    }
};
