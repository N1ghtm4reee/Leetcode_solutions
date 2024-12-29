/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int i = 0;
    int j = 0;
    int arr_size = 0;
    while(i < wordsSize)
    {
        j = 0;
        while(words[i][j])
        {
            if (words[i][j] == x)
            {
                arr_size++;
                break;
            }
            j++;
        }
        i++;
    }
    int *arr = malloc(sizeof(int) * arr_size);
    i = 0;
    int c = 0;
    while(i < wordsSize)
    {
        j = 0;
        while(words[i][j])
        {
            if (words[i][j] == x)
            {
                arr[c++] = i;
                break;
            }
            j++;
        }
        i++;
    }
    *returnSize = arr_size;
    return arr;
}
