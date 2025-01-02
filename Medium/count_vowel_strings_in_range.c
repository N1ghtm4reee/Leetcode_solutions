/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int is_vowel(char c)
{
    if (c == 'a' || c == 'o' || c == 'e' || c == 'i' || c == 'u')
        return 1;
    return 0;
}

int* vowelStrings(char** words, int wordsSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
    int i = 0;
    int j = 0;
    int q = 0;
    int *out = malloc(sizeof(int) * queriesSize);
    memset(out, 0, sizeof(int) * queriesSize);
    int *valids = malloc(sizeof(int) * wordsSize);
    memset(valids, 0, sizeof(int) * wordsSize);
    while(q < wordsSize)
    {
        if (is_vowel(words[q][0]) == 1 && is_vowel(words[q][strlen(words[q]) - 1]) == 1)
            valids[i++] = 1;
        else
            valids[i++] = 0;
        q++;
    }
    int *prefix = malloc(sizeof(int) * (wordsSize + 1));
    prefix[0] = 0;
    q = 0;
    while(q < wordsSize)
    {
        prefix[q + 1] = valids[q] + prefix[q];
        q++;
    }
    q = 0;
    while(q < queriesSize)
    {
        int sum = prefix[queries[q][1] + 1] - prefix[queries[q][0]];
        out[q] = sum;
        q++;
    }
    *returnSize = q;
    return out;
}
