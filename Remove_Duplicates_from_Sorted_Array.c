#include <stdlib.h>
#include <stdio.h>

int get_array_len(int *arr, int  size)
{
    int i = 0;
    int n  = arr[i];
    int k = 1;
    while(i < size)
    {
        if(arr[i] != n)
        {
            k++;
            n = arr[i];
        }
        i++;
    }
    return k;
}

int *init_array(int *nums, int numsSize, int len) {
    int i = 0;
    int j = 0;

    while (j < numsSize) {
        nums[i] = nums[j];
        i++;
        while (j < numsSize - 1 && nums[j] == nums[j + 1]) {
            j++;
        }
        j++;
    }
    return nums;
}

int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    int k = 1;
    if(numsSize < 1)
        return 0;
    int len = get_array_len(nums, numsSize);
    nums = init_array(nums, numsSize, len);
    return len;
}
