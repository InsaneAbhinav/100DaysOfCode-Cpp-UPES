// Q1: Write a program to input two numbers and display their sum.

#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum = " << sum(a, b) << endl;
    return 0;
}
