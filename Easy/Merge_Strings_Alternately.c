char * mergeAlternately(char * word1, char * word2){
    int i = 0;
    int j = 0;
    int s = 0;
    char *str;
    int total_len = strlen(word1) +  strlen(word2);
    str = malloc(sizeof(char) * total_len + 1);
    if(!str)
        return NULL;
    while(word1[i] || word2[j])
    {
        if(word1[i])
            str[s++] = word1[i++];
        if(word2[j])
            str[s++] = word2[j++];
    }
    str[s] = '\0';
    return  str;
}
