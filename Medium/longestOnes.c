int longestOnes(int* nums, int numsSize, int k) {
    int start = 0;
    int end = 0;
    int counter = 0;
    int f_count = 0;
    int i = 0;
    while(end < numsSize)
    {
        if (nums[end] == 1)
        {
            counter++;
            end++;
        }
        else if (nums[end] == 0 && k > 0)
        {
            counter++;
            end++;
            k--;
        }
        else if (k == 0 && nums[start] == 1)
        {
           start++;
            counter--;
        }
        else if (k == 0 && nums[start] == 0)
        {
            k++;
            counter--;
            start++;
        }
        if (counter > f_count)
            f_count = counter;
    }
    return f_count;
}
