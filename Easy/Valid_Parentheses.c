#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int ft_strlen(char *str) {
    int i = 0;
    while (str[i]) {
        i++;
    }
    return i;
}

typedef struct {
    char *content;
    int size;
    int capacity;
} t_stack;

int is_full(t_stack *stack) {
    return stack->size == stack->capacity;
}

int is_empty(t_stack *stack) {
    return stack->size == 0;
}

t_stack *create(int len) {
    if (len <= 0)
        return NULL;
    t_stack *new = malloc(sizeof(t_stack));
    if (!new)
        return NULL;
    new->content = malloc(sizeof(char) * len);
    if (!new->content) {
        free(new);
        return NULL;
    }
    new->capacity = len;
    new->size = 0;
    return new;
}

int is_parethese(char c) {
    return (c == '(' || c == ')' || c == '{' || c == '}' || c == '[' || c == ']');
}

void push(t_stack *stack, char data) {
    if (is_full(stack)) {
        printf("Stack full\n");
        return;
    }
    if (is_parethese(data)) {
        stack->content[stack->size++] = data;
    } else {
        printf("Error: Invalid character\n");
    }
}

int pop(t_stack *stack) {
    if (is_empty(stack)) {
        printf("Stack empty\n");
        return -1;
    }
    stack->size--;
    return 0;
}

int is_matching(t_stack *stack, char c) {
    if (is_empty(stack)) {
        return 0;
    }
    char top = stack->content[stack->size - 1];
    return (top == '(' && c == ')') || 
           (top == '{' && c == '}') || 
           (top == '[' && c == ']');
}

int checker(t_stack *stack, char *str) {
    int i = 0;
    while (str[i]) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            push(stack, str[i]);
        } else if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
            if (!is_matching(stack, str[i])) {
                return 1;
            }
            pop(stack);
        }
        i++;
    }
    return is_empty(stack) ? 0 : 1;
}

void free_stack(t_stack *stack) {
    if (stack) {
        free(stack->content);
        free(stack);
    }
}

bool isValid(char *s) {
    t_stack *stack = create(ft_strlen(s));
    if (!stack) {
        printf("Memory allocation failed\n");
        return false;
    }
    int result = checker(stack, s);
    free_stack(stack);
    return result == 0;
}
