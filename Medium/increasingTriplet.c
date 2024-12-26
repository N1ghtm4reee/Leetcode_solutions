#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

bool increasingTriplet(int* nums, int numsSize) {
    int min = INT_MAX;
    int mid = INT_MAX;
    int max = INT_MAX;
    int i = 0;
    int current;
    int k;
    int n = 1;

    while(i < numsSize)
    {
        if (min >= nums[i])
            min = nums[i];
        else if (mid >= nums[i])
            mid = nums[i];
        else if (max >= nums[i])
            return true;
        i++;
    }
    return false;
}
