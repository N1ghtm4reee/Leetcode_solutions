bool is_reachest_kid(int *arr, int arrr, int i, int size, int extra)
{
    bool ret = false;
    int res = 0;
    int j = 0;
    int small = 0;
        res = arrr + extra;
        while(j < size)
        {
            if (res < arr[j])
                small++;
            j++;
        }
        if (small > 0)
            return false;
        return true;
}

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int i = 0;
    int wich_kid = 0;
    bool *final_calculation = (bool *)malloc(sizeof(bool) * candiesSize);
    *returnSize = candiesSize;
    while(i < candiesSize)
    {
        final_calculation[i] = is_reachest_kid(candies, candies[i], i, candiesSize, extraCandies);
        i++;
    }
    return final_calculation;
}
