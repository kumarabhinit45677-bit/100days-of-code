#include <stdio.h>

int main() {
    int n, original, remainder, result = 0, digits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while (temp != 0) {
        remainder = temp % 10;

        
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power = power * remainder;
        }

        result = result + power;
        temp = temp / 10;
    }

    
    if (result == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
