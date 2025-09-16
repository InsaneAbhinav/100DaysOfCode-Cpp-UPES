// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <iostream>
using namespace std;

int main() {
    int totalSeconds;
    cout << "Enter time in seconds: ";
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;            // Calculate hours
    int minutes = (totalSeconds % 3600) / 60;  // Calculate remaining minutes
    int seconds = totalSeconds % 60;           // Remaining seconds

    cout << hours << ":" << minutes << ":" << seconds;
    return 0;
}
