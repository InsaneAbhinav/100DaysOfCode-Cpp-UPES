// Q2: Write a program to swap two numbers using a third variable.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"Enter two numbers: ";
    cin >> a >> b;

    int temp;      // Temporary variable to help swap
    temp = a;
    a = b;
    b = temp;

    cout << "After swap: " << a << " " << b;
    return 0;
}
