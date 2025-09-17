// Q2: Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int c;      // Temporary variable to help swap
    c = a;
    a = b;
    b = c;

    printf("After swap: %d %d", a, b);
    return 0;
}
