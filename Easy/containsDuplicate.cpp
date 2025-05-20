class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> map;
        for (auto i = 0; i < nums.size(); i ++)
        {
            if (map.count(nums[i]) >= 1)
                return 1;
            map.insert(std::make_pair(nums[i], 1));
        }
        return 0;
    }
};
