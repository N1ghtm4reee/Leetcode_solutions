bool isPalindrome(int x) 
{
    int len = 0;
    int tx = x;
    char* str;
    if(x < 0)
        return false;
    if (x == 0)
        return true;
    while(tx)
    {
        len++;
        tx  /= 10;
    }
    str = malloc(sizeof(char) * len + 1);
    str[len] = '\0';
    while(x)
    {
        len--;
        str[len] = (x % 10) + '0';
        x /= 10;
    }
    int i = 0;
    int j = strlen(str) - 1;
    while(i < j)
    {
        if(str[i] != str[j])
            return false;
        i++;
        j--;
    }
    return true;
}
