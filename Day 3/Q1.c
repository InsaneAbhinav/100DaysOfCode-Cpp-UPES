// Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float celsius;
    printf("Enter temperature to covert: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    float fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit=%f", fahrenheit);
    return 0;
}
