#include <stdio.h>
#include <stdlib.h>
#define MAX 999999

int stack[MAX];
int top = -1;

void push(int data) {
    if (top >= MAX - 1) {
        printf("%s\n", "stack over flow");
        return;
    }

    stack[++top] = data;
}

int pop() {
    if (top == -1) {
        printf("%s\n", "stack under flow");
        return -1;
    }

    return stack[top--];
}

void show() {
    if (top == -1) {
        printf("%s\n", "not found data");
        return;
    }

    for (int i = top; i > -1; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    push(3);
    push(7);
    push(2);
    push(1);
    push(9);
    pop();
    show();
    printf("------\n");
    pop();
    show();

    return 0;
}