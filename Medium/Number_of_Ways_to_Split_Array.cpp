class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int count = 0;
        int i = 0;
        long sum = 0;
        long total_sum = 0;
        for(int j = 0; j < nums.size(); j++)
            total_sum += nums[j];
        while(i < nums.size() - 1)
        {
            sum += nums[i];
            if (sum >= total_sum - sum)
                count++;
            i++;
        }
        return count;
    }
};
