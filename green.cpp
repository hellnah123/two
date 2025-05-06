#include <stdio.h>
#define MAX 100
int main() {
    char stack[MAX] = {0}, input[] = "id+idid";
    int top = -1, i = 0;
    printf("Stack\tInput\tAction\n");
    while (input[i] != '\0') {
        stack[++top] = input[i++]; 
        printf("%.s\t%s\tSHIFT -> %c\n", top + 1, stack, &input[i], stack[top]);
        if (top >= 1 && stack[top - 1] == 'i' && stack[top] == 'd') {
            top -= 1;
            stack[top] = 'F';
            printf("%.s\t%s\tREDUCE F -> id\n", top + 1, stack, &input[i]);
        }
    }
    return 0;
}
