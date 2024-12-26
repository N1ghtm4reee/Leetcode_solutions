int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int left_index;
    int right_index;
    int *res = malloc(sizeof(int) * numsSize);
    int index = 0;
    int right_result = 1;
    int i = 1;
    res[0] = 1;
    while(i < numsSize)
    {
        res[i] = res[i - 1] * nums[i - 1];
        i++;
    }
    i = numsSize - 1;
    while(i >= 0)
    {
        res[i] = res[i] * right_result;
        right_result = nums[i] * right_result;
        i--;
    }
    *returnSize = numsSize;
    return res;
}
