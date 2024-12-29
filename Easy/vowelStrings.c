
int is_vowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o')
        return 1;
    return 0;
}

int vowelStrings(char** words, int wordsSize, int left, int right) {
    int i = left;
    int counter = 0;
    while(i <= right)
    {
        int j = 0;
        while(words[i][j])
        {
            if (is_vowel(words[i][0]) == 1)
            {
                while(words[i][j + 1])
                    j++;
                if (is_vowel(words[i][j]) == 1)
                    counter++;
                break;
            }
            else
                break ;
        }
        i++;
    }
    return counter;
}
