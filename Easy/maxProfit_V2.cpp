class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int left = 0;
        int right = 1;
        while(right < prices.size())
        {
            int currentProfit = prices[right] - prices[left];
            if (currentProfit > profit) profit = currentProfit;
            if (prices[left] > prices[right])
            {
                left = right;
                right += 1;
            }
            else
                right++;
        }
        return (profit <= 0 ? 0 : profit);
    }
};
