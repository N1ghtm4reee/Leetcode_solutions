class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        std::map<int,int> _map;
        _map[nums[0]] = nums[0];
        for (auto i = 0; i < nums.size(); i++)
        {
            _map[nums[i]] = nums[i];
        }
        std::cout << nums[0] << "\n";
        // now get the missing smallest
        int finder = 1;
        while(1337)
        {
            auto it = _map.find(finder);
            if (it == _map.end())
                return finder;
            finder++;
        }
        return finder;
    }
};
