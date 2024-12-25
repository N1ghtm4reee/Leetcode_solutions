#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int count_size(char *s)
{
    int ss = 0;
    int i = 0;
    int w = 0;
    while(s[i] && s[i] == ' ')
        i++;
    while(s[i + ss + w])
    {
        while(s[i + ss + w] && s[i + ss + w] != ' ')
            ss++;
        if (!s[i + ss + w])
            break;
        if (s[i + ss + w] && s[i + ss + w] == ' ')
            w++;
    }
    return (ss + w);
}

char* reverseWords(char* s) {
    int i = strlen(s) - 1;
    int arr_size = count_size(s) + 1;
    char *arr = malloc(arr_size);
    int w_start = 0;
    int w_end = 0;
    int j = 0;
    while(i >= 0 && s[i] == ' ')
        i--;
    while(i >= 0)
    {
        w_end = i;
        while(i >= 0 && s[i] != ' ')
            i--;
        w_start = i + 1;
        while(w_start <= w_end)
            arr[j++] = s[w_start++];
        while(i >= 0 && s[i] == ' ')
            i--;
        if (i >= 0)
            arr[j++] = ' ';
    }
    arr[j] = '\0';
    return arr;
}
