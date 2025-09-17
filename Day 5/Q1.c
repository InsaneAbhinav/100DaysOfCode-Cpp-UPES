// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h> // Needed for pow() function

int main() {
    float principal, rate, time;
    printf("Enter principal, rate(%%), time(years): ");
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculate simple interest: SI = (P * R * T) / 100
    float simpleInterest = (principal * rate * time) / 100;

    // Calculate compound interest: CI = P * (1 + R/100)^T - P
    float compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest=%f\n", simpleInterest);
    printf("Compound Interest=%f\n", compoundInterest);

    return 0;
}
