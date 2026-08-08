#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        char c = s[i];

        if (c == '(') {
            stack[++top] = ')';
        }
        else if (c == '{') {
            stack[++top] = '}';
        }
        else if (c == '[') {
            stack[++top] = ']';
        }
        else {
            if (top == -1 || stack[top] != c) {
                return false;
            }

            top--;
        }
    }

    return top == -1;
}