class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;
        int i = 0;
        while(i < strs.size())
        {
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());

            anagramGroups[sorted].push_back(strs[i]);
            i++;
        }
        vector<vector<string>> result;
        for (auto& group : anagramGroups) {
            result.push_back(group.second);
        }
        return result;
    }
};
