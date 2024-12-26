#include <stdio.h>
#include <string.h>

int is_vowel(int c)
{
    if (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i')
        return 1;
    return 0;
}

int maxVowels(char* s, int k) {
    int i = 0;
    int final_count = 0;
    int count = 0;
    int len = strlen(s);
    while(i < k)
    {
        if (is_vowel(s[i]))
            count++;
        i++;
    }
    final_count = count;
    while(i < len)
    {
        if (is_vowel(s[i - k]))
            count--;
        if (is_vowel(s[i]))
            count++;
        if (count > final_count)
            final_count = count;
        i++;
    }
    return final_count;
}
