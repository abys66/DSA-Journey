class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = prices[0], maxProfit = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] > bestBuy)
            {
                maxProfit = max(prices[i] - bestBuy, maxProfit);
            }
            bestBuy = min(prices[i], bestBuy);
        }
        return maxProfit;
    }
};
