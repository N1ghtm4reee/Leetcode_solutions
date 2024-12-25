#include <string.h>

int is_vowel(char c)
{
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    return 0;
}

char* reverseVowels(char* s) {
    int first = 0;
    int last = strlen(s) - 1;
    while(first < last)
    {
        if (is_vowel(s[first]) == 1)
        {
            while(last > first && is_vowel(s[last]) == 0)
                last--;
            char c = s[last];
            s[last] = s[first];
            s[first] = c;
            last--;
        }
        first++;
    }
    return s;
}
