// Q2: Write a program to find and display the sum of the first n natural numbers

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i; // Add i to sum
    }

    cout << "Sum=" << sum;
    return 0;
}
