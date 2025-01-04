class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> counter(100, 0);
        vector<int> result;
        for(int i = 0; i < nums.size(); i++)
        {
            counter[nums[i]]++;
            if(counter[nums[i]] == 2)
                result.push_back(nums[i]);
        }
        return result;
    }
};
