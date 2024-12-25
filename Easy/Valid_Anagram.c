bool isAnagram(char* s, char* t) {
    int array1[26] = {0};
    int array2[26] = {0};
    int i = 0;
    int j = 0;
    int c;
    while(s[i])
    {
        c = s[i] - 97;
        array1[c]++;
        i++;
    }
    i = 0;
    while(t[i])
    {
        c = t[i] - 97;
        array2[c]++;
        i++;
    }
    while(j < 26)
    {
        if (array1[j] != array2[j])
            return false;
        j++;
    }
    return true;
}
