// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    float r;
    printf("Enter radius of the circle: ");
    scanf("%f", &r);

    printf("Area=%f, Circumference=%f", 3.14f * r * r, 2 * 3.14f * r);

    return 0;
}
