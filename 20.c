#include <stdio.h>

int main() {
    int n, digit, product = 1, Odd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;       
        if (digit % 2 != 0) { 
            product = product * digit;
            Odd = 1;       
        }
        n = n / 10;           
    }

    printf("%d", product);

    return 0;
}
