class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int i = 0;
        int j = 1;
        while(j < prices.size())
        {
            if (prices[j] - prices[i] > profit)
                profit = prices[j] - prices[i];
            j++;
        }
        j = 0;
        int k;
        while(j < prices.size())
        {
            if(prices[i] > prices[j])
            {
                i = j;
                k = i + 1;
                while(k < prices.size())
                {
                    if (prices[k] - prices[i] > profit)
                        profit = prices[k] - prices[i];
                    k++;
                }
            }
            j++;
        }
        return profit;
    }
};
