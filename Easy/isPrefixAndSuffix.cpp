class Solution {
public:
    int isPrefixAndSuffix(string str1, string str2)
    {
        if (str1.size() > str2.size())
            return 0;
        if (str2.substr(0, str1.size()) != str1)
            return 0;
        if (str2.substr(str2.size() - str1.size()) != str1)
            return 0;
        return 1;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        for(int i = 0;i < words.size() - 1; i++)
        {
            for(int j = i; j < words.size(); j++)
            {
                if (i != j && isPrefixAndSuffix(words[i], words[j]))
                    count++;
            }
        }
        return count;
    }
};
