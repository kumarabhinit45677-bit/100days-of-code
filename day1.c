#include <stdio.h>

int main() {
    int a, b;        
    int sum, diff, product, quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;   

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);

    return 0;
}
