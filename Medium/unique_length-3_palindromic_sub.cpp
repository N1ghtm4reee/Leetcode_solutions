class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_map<char, int> right;
        unordered_map<char, int> left;
        unordered_set<string> res;
        int len = s.size();
        int count = 0;
        for(int i = 1; i < len; i++)
            right[s[i]]++;
        left[s[0]] = 1;
        for(int m = 1; m < len - 1; m++)
        {
            right[s[m]]--;
            for(auto j = left.begin(); j != left.end() ; j++)
            {
                char c = j->first;
                if (right[c] > 0)
                    res.insert(string({s[m] ,c}));
            }
            left[s[m]] = 1;
        }
        return res.size();
    }
};
