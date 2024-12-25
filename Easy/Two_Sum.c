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
