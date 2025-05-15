class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> res;
        res.push_back(words[0]);
        for (auto i = 1; i < groups.size(); i++)
        {
            if (i > 0 && groups[i] != groups[i - 1])
                res.push_back(words[i]);
        }
        return res;
    }
};
