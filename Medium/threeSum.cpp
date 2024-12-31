class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int j;
        int k = nums.size() - 1;
        for(int i = 0; i < nums.size() - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            j = i + 1;
            k = nums.size() - 1;
            while(j < k)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    result.push_back({nums[i] ,nums[j] ,nums[k]});
                    while(j < k && nums[j] == nums[j + 1])
                        j++;
                    while(j < k && nums[k] == nums[k - 1])
                        k--;
                    k--;
                    j++;
                }
                else if (nums[i] + nums[j] + nums[k] < 0)
                    j++;
                else
                    k--;
            }
        }
        return result;
    }
};
