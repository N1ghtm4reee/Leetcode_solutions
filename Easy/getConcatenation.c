/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int i = 0;
    int *new = malloc(sizeof(int) * (numsSize * 2));
    if (!new)
        return NULL;
    while(i < numsSize)
    {
        new[i] = nums[i];
        i++;
    }
    int j = 0;
    while(j < numsSize)
        new[i++] = nums[j++];
    *returnSize = numsSize * 2;
    return new;
}
