#include <stdio.h>

int main() {
    long num;
    int digit, count[10] = {0}, max = 0, mostRepeatedDigit, i;

    printf("Enter a number: ");
    scanf("%ld", &num);

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with the highest frequency
    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            mostRepeatedDigit = i;
        }
    }

    printf("Most frequent digit: %d\n", mostRepeatedDigit);

    return 0;
}
