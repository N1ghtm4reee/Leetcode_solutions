char* truncateSentence(char* s, int k) {
    int i = 0;
    int w = 1;
    while(s[i] && w <= k)
    {
        while(s[i] && s[i] != ' ')
            i++;
        if (s[i] == ' ')
            i++;
        w++;
    }
    char *str = malloc(i + 1);
    if (!str)
        return NULL;
    int j = 0;
    while(j < i - 1)
    {
        str[j] = s[j];
        j++;
    }
    if (s[j] && s[j] != ' ')
    {
        str[j] = s[j];
        j++;
    }
    str[j] = '\0';
    return str;
}
