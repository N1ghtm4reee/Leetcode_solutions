int lengthOfLastWord(char* s) {
    int i = 0;
    int end = 0;
    int start = 0;
    while(s[i])
        i++;
    i--;
    while(i >= 0 && s[i] == ' ')
        i--;
    end = i;
    while(i >= 0 && s[i] != ' ')
        i--;
    start = i;
    return (end - start);
}
