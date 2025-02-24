class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
       while(i < j)
    {
        if (isalnum(s[i]) == 0)
            i++;
        else if (isalnum(s[j]) == 0)
            j--;
        else
        {
            if (tolower(s[i]) != tolower(s[j]) && i != j)
                return false;
            i++;
            j--;
        }
    }
        return true;
    }
};
