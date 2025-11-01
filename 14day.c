#include <stdio.h>

int main() {
    int n, i;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%d\n", product);

    return 0;
}
