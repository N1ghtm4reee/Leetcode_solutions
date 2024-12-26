double findMaxAverage(int* nums, int numsSize, int k) {

    double res = 0;
    double avg = 0;
    double fin_avg = 0;
    int i = 0;

    while(i < k)
        res += nums[i++];
    fin_avg = res / k;
    while(i < numsSize)
    {
        res += nums[i] - nums[i - k];
        avg = res / k;
        if (avg > fin_avg)
            fin_avg = avg;
        i++;
    }
    return fin_avg;
}
