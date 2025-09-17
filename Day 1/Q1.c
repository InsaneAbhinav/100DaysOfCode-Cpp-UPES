// Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", sum(a, b));
    return 0;
}
