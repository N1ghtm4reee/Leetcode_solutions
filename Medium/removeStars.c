#include <string.h>
#include <stdlib.h>


typedef struct stack
{
    char *arr;
    int index;
}   t_stack;


void push(t_stack *stck, char c)
{
    stck->arr[stck->index++] = c;
}

void pop(t_stack *stck)
{
    stck->index--;
}

char* removeStars(char* s) {
    int i = 0;
    t_stack stck;
    stck.index = 0;
    stck.arr = malloc(sizeof(char) * (strlen(s) + 1));
    while(s[i])
    {
        if (s[i] != '*')
            push(&stck , s[i]);
        else
        {
            pop(&stck);
        }
        i++;
    }
    stck.arr[stck.index] = '\0';
    s = realloc(s, stck.index + 2);
    strcpy(s, stck.arr);
    return s;
}
