class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int l = 0;
        int count = 1;
        int f_count = 0;
        int r = 0;
        while(r < s.size())
        {
            i = l;
            while(i < r)
            {
                if (s[i] == s[r])
                {
                    l++;
                    i = l - 1;
                    count--;
                }
                i++;
            }
            if (count > f_count)
                f_count = count;
            r++;
            count++;
        }
        return f_count;
    }
};
