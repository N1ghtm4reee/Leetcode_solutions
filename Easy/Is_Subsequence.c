bool isSubsequence(char* s, char* t) {
    int i = 0;
    int j = 0;
    while(s[i] && t[j])
    {
        if(s[i] == t[j])
        {
            i++;
        }
        j++;
    }
    if(s[i] == '\0')
        return  true;
    return false;
}
