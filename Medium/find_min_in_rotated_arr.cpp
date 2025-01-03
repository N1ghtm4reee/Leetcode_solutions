class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int min = INT_MAX;
        int r = nums.size() - 1;
        while(l <= r)
        {
            if (nums[l] < min)
                min = nums[l];
            if (nums[r] < min)
                min = nums[r];
            l++;
            r--;
        }
        return min;
    }
};
