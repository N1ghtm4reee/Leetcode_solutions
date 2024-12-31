class Solution {
public:
    int differenceOfSums(int n, int m) {
        int n_div = 0;
        int div = 0;
        int i = 1;
        while(i <= n)
        {
            if (i % m == 0)
                div += i;
            else
                n_div += i;
            i++;
        }
        return (n_div - div);
    }
};
