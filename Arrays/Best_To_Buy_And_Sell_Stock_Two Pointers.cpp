class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        int left = 0;
        int right = 1;
        int maxProfit = 0;

        while (right < prices.size()) {
            if (prices[right] > prices[left]) {
                int currentProfit = prices[right] - prices[left];
                maxProfit = max(currentProfit, maxProfit);
            }
            else {
                left = right;
            }
            right++;
        }
        return maxProfit;
    }
};
