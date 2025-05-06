#include <stdio.h>
#include <string.h>
char stack[100], input[100];
int top = -1, i = 0;
void push(char ch) {
    top++;
    stack[top] = ch;
}
void pop() {
    top--;
}
void displayStack() {
    for (int j = 0; j <= top; j++)
        printf("%c", stack[j]);
}
int main() {
    char tempInput[100];
    strcpy(tempInput, "id+idid");  // extra variable
    strcpy(input, tempInput);
    printf("Stack\tInput\tAction\n");
    while (input[i] != '\0') {
        char a = input[i];
        char act[20];
        sprintf(act, "SHIFT -> %c", a);
        push(a);
        i++;
        printf("%s\t%s\t%s\n", stack, &input[i], act);
        // Redundant condition & inefficient
        if (top >= 2 && stack[top - 2] == 'i' && stack[top - 1] == 'd') {
            pop(); pop();
            stack[top] = 'F'; // Replace 'id' with 'F'
            printf("%s\t%s\tREDUCE F -> id\n", stack, &input[i]);
        }
    }
    return 0;
}
