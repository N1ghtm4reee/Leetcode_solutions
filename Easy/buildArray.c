int* buildArray(int* nums, int numsSize, int* returnSize) {
    int i = 0;
    int *new_arr = malloc(sizeof(int) * numsSize);
    while(i < numsSize)
    {
        new_arr[i] = nums[nums[i]];
        i++;
    }
    *returnSize = i;
    return new_arr;
}
