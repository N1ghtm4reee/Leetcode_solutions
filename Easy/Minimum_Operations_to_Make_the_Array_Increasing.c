int minOperations(int* nums, int numsSize){
    int i = 0;
    int res = 0;
    while(i < numsSize - 1)
    {
        if (nums[i] > nums[i + 1])
        {
            while(nums[i + 1] < (nums[i] + 1))
            {
                nums[i+1]++;
                res++;
            }
            i = 0;
        }
        else if (nums[i] == nums[i + 1])
        {
            nums[i + 1]++;
            res++;
            i = 0;
        }
        else
            i++;
    }
    return res;
}
