class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1;
        int min = nums[0];
        while(l <= r)
        {
            int m = (l + r) / 2;
            min = std::min(min, nums[m]);
            if (nums[m] > nums[r])
            {
                l = m + 1;
                min = std::min(min, nums[l]);
            }
            else if (nums[m] < nums[l])
            {
                r = m - 1;
                min = std::min(min, nums[r]);
            }
            else
                break;
        }
        return min;
    }
};
