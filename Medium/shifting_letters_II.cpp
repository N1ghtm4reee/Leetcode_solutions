class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> sum(s.size() + 1, 0);
        for(int i = 0;i < shifts.size(); i++)
        {
            int start = shifts[i][0], end = shifts[i][1], dir = shifts[i][2];
            if (dir == 0)
            {
                sum[start]--;
                if (end + 1 < s.size())
                    sum[end + 1]++;
            }
            else
            {
                sum[start]++;
                if (end + 1 < s.size())
                    sum[end + 1]--;
            }
        }
        int cu_sum = 0;
        for(int k = 0; k < s.size(); k++)
        {
            cu_sum += sum[k];
            s[k] = (s[k] - 'a' + cu_sum) % 26 + 'a';
            if (s[k] < 'a')
                s[k] += 26;
        }
        return s;
    }
};
