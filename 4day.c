#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum=%d", sum);
    return 0;
}
