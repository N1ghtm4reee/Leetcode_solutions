int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int i = 0;
    int count = 0;
    while(i < hoursSize)
    {
        if (hours[i] >= target)
            count++;
        i++;
    }
    return count;
}
