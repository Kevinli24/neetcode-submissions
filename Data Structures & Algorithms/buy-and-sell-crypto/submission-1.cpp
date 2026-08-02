class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        /*

        Two pointers
        */
        int low = 0;
        int high = 1;

        while (high < prices.size())
        {
            if (prices[high] > prices[low])
            {
                if (prices[high] - prices[low] > maxprofit)
                {
                    maxprofit = prices[high] - prices[low];
                }
                ++high;
            }
            else
            {
                low = high;
                high++;
            }
        }
        return maxprofit;
        



    }
};
