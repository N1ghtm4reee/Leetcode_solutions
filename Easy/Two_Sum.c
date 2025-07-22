int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int i = 0;
    int j = 0;
    *returnSize = 0;
    int *numss = NULL;
    while(i < numsSize - 1)
    {
        j = i + 1;
        while(j < numsSize)
        {
            if(nums[i] + nums[j] == target)
            {
                numss = malloc(sizeof(int) * 2);
                numss[0] = i;
                numss[1] = j;
                *returnSize = 2;
                return numss;
            }
            j++;
        }
        
        i++;
    }
    return NULL;
}

// back to it hardcore mode
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        for (auto i = 0; i < nums.size(); i++)
        {
            std::unordered_map<int, int>::iterator it = map.find(target - nums[i]);
            if (it != map.end())
            {
                vector<int> res;
                res.push_back(it->second);
                res.push_back(i);
                return res;
            }
            else
                map[nums[i]] = i;
        }
        return vector<int>(0);
    }
};

