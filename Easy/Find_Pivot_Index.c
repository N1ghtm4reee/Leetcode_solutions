int pivotIndex(int* nums, int numsSize) {
    int pivot_founded = -1;
    int left_result = 0;
    int right_result = 0;
    int index = 0;
    int left_index;
    int right_index;
    while(index < numsSize)
    {
        left_index = 0;
        right_index = numsSize - 1;
        right_result = 0;
        left_result = 0;
        while(1)
        {
            if (left_index == right_index)
                break;
            if (left_index < index)
                left_result += nums[left_index++];
            if (right_index > index)
                right_result += nums[right_index--];
        }
        if (left_result == right_result)
            return (index);
        index++;
    }
    return -1;
}
