class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1)
            return true;
        if (n % 2)
            return false;
        int r = 1;
        while (r <= (n / 2))
        {
            r *= 2;
            if (r == n)
                return true;
        }
        return false;
    }
};
