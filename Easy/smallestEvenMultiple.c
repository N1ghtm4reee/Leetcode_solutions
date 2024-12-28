class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i = 2;
        while(1)
        {
            if (i % 2 == 0)
            {
                if (i % n == 0)
                    return i;
            }
            i++;
        }
        return 0;
    }
};
