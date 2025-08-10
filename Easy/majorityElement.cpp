class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::map<int, int> _map;
        int half = nums.size() / 2;
        for(int i = 0; i < nums.size(); i++)
        {
            if (_map[nums[i]] >= half)
                return nums[i];
            _map[nums[i]] += 1;
        }
        return 0;
    }
};
