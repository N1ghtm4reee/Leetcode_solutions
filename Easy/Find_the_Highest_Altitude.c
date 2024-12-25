#include <limits.h>

int largestAltitude(int* gain, int gainSize) {
    int current_alt = gain[0];
    int highest = current_alt;
    int i = 0;
    while(i < gainSize - 1)
    {
        current_alt += gain[i + 1];
        if (highest < current_alt)
            highest = current_alt;
        i++;
    }
    if (highest < 0)
        highest = 0;
    return highest;
}
