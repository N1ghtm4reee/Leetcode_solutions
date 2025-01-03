class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[left] <= nums[mid])//left side
            {
                if (target < nums[left] || target > nums[mid])//look right
                {
                    left = mid + 1;
                }
                else//look left
                {
                    right = mid - 1;
                }
            }   
            else //right side
            {
                if (target > nums[right] || target < nums[mid])//look left
                {
                    right = mid - 1;
                }
                else//look right
                {
                    left = mid + 1;
                }
            }        
       }
       return -1;
    }
};
