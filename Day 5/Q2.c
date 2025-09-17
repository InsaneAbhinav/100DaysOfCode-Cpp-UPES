//Q2: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int totalSeconds;
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    int hours = totalSeconds / 3600;           // Calculate hours
    int minutes = (totalSeconds % 3600) / 60;  // Calculate remaining minutes
    int seconds = totalSeconds % 60;           // Remaining seconds

    printf("%d:%d:%d", hours, minutes, seconds);
    return 0;
}
