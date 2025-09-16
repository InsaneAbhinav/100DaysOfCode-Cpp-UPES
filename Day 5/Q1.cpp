// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <iostream>
#include <cmath> // Needed for pow() function
using namespace std;

int main() {
    float principal, rate, time;
    cout << "Enter principal, rate(%), time(years): ";
    cin >> principal >> rate >> time;

    // Calculate simple interest: SI = (P * R * T) / 100
    float simpleInterest = (principal * rate * time) / 100;

    // Calculate compound interest: CI = P * (1 + R/100)^T - P
    float compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    cout << "Simple Interest=" << simpleInterest << endl;
    cout << "Compound Interest=" << compoundInterest << endl;

    return 0;
}
