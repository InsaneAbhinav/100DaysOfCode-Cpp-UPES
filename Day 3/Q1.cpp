// Q1: Write a program to convert temperature from Celsius to Fahrenheit.

#include <iostream>
using namespace std;

int main() {
    float celsius;
    cout<<"Enter temperature to covert: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    float fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit=" << fahrenheit;
    return 0;
}
