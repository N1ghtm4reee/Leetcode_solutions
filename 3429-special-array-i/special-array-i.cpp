class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int len = nums.size();
        if (len <= 1)
            return true;
        for (int i = 0;i < len -1; i++)
        {
            if ((nums[i] % 2) == (nums[i + 1] % 2))
                return false;
        }
        return true;
    }
};