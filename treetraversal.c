#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100
int stack[MAX];
int top = -1;
void push(int val) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = val;
    }
}
int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}
int evaluatePostfix(char* expr) {
    int i, op1, op2, result;

    for (i = 0; expr[i] != '\0'; i++) {
        char token = expr[i];
        if (token == ' ' || token == '\t')
        continue;
        if (isdigit(token)) {
            push(token - '0'); 
        } else
         {
            op2 = pop();
            op1 = pop();

            switch (token) {
                case '+': result = op1 + op2; break;
                case '-': result = op1 - op2; break;
                case '*': result = op1 * op2; break;
                case '/': result = op1 / op2; break;
                default:
                    printf("Invalid operator: %c\n", token);
                    return -1;
            }
            push(result);
        }
    }

    return pop(); 
}
int main() {
    char postfix[MAX];

    printf("Enter a postfix expression (e.g., 53+82-*): ");
    scanf("%s", postfix);

    int result = evaluatePostfix(postfix);
    printf("Result = %d\n", result);

    return 0;
}
