#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void push(char *stack, int *top, char c) {
    stack[++(*top)] = c;
}

char pop(char *stack, int *top) {
    return stack[(*top)--];
}


bool isValid(char* s) {
    int top = -1;
    char stack[10000];   // max input size

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            push(stack, &top, s[i]);
        }
        else {
            if (top < 0) return false;  // no matching opening

            char open = pop(stack, &top);

            if ((s[i] == ')' && open != '(') ||
                (s[i] == ']' && open != '[') ||
                (s[i] == '}' && open != '{')) {
                return false;
            }
        }
    }

    return top == -1;  // stack must be empty


}


int main() {
    char s[] = "()[]{}";
    printf("%d\n", validate(s));  // 1 (true)
    return 0;
}