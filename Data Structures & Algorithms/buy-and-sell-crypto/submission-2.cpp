class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        /*

        Brute force:
        Loop through, find the max profit, return the profit, O(n^2)
        */

        for (int i = 0; i < prices.size() - 1; ++i)
        {
            for (int j = i; j < prices.size(); ++j)
            {
                if (prices[j] - prices[i] > maxprofit)
                {
                    maxprofit = prices[j] - prices[i];
                }
            }
        }
        return maxprofit;
    }
};
