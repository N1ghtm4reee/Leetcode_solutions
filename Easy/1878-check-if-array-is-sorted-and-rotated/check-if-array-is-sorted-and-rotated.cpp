class Solution {
public:
    bool check(vector<int>& nums) {
        int x = 0;
        int i = 0;
        vector<int> new_arr(nums.size());
        while(x < nums.size())
        {
            i = 0;
            while(i < nums.size())
            {
                new_arr[i] = nums[(i + x) % nums.size()];
                i++;
            }
            if (is_sorted(new_arr.begin(), new_arr.end()))
                return true;
            x++;
        }
        return false;
    }
};
