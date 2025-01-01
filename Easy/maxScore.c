int maxScore(char* s) {
    int i = 0;
    int final = 0;
    int j = 0;
    int z_count = 0;
    int o_count = 0;
    int tmp = 0;
    while(i < strlen(s) - 1)
    {
        j = 0;
        o_count = 0;
        z_count = 0;
        tmp = 0;
        while(j <= i)
        {
            if (s[j] == '0')
                z_count++;
            j++;
        }
        int k = i + 1;
        while(s[k])
        {
            if (s[k] == '1')
                o_count++;
            k++;
        }
        tmp = o_count + z_count;
        if (final < tmp)
            final = tmp;
        i++;
    }
    return final;
}
