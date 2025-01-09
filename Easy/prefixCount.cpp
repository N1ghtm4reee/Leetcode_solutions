class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int pref_size = pref.size();
        int count = 0;
        for(int i = 0;i < words.size(); i++)
        {
            if (words[i].substr(0, pref_size) == pref)
                count++;
        }
        return count;
    }
};
