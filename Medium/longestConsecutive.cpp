class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int seq = 1;
        std::set<int> _set;
        if (!nums.size()) return 0;
        for(int i = 0; i < nums.size(); i++)
        {
            _set.insert(nums[i]);
        }
        int max_seq = 0;
        auto it = _set.begin();
        while(it != _set.end())
        {
            if (_set.count(*it + 1))
                seq++;
            else
            {
                if (seq > max_seq)
                    max_seq = seq;
                seq = 1;
            }
            it++;
        }
        if (seq > max_seq)
            max_seq = seq;
        return max_seq;
    }
};
