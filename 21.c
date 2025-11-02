#include <stdio.h>

int main() {
    int n, first, last, p, digits = 0, power = 1, middle;

    printf("Enter a number: ");
    scanf("%d", &n);

    p = n;
    last = n % 10;  

    while (p >= 10) {
        p = p / 10;
        digits++;
        power = power * 10;  
    }
    first = p;  

    if (digits == 0) {
        printf("%d", n);
        return 0;
    }

    middle = n % power;   
    middle = middle / 10; 

    
    n = last * power + middle * 10 + first;

    printf("%d", n);

    return 0;
}
