//Write a program to calculate the area and circumference of a circle given its radius.

#include <iostream>
using namespace std;

int main() {
    float r;
    cout << "Enter radius of the circle: ";
    cin >> r;

    cout << "Area=" << 3.14 * r * r 
         << ", Circumference=" << 2 * 3.14 * r;

    return 0;
}
