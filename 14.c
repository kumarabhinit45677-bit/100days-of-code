#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }

    printf("%d\n", sum);

    return 0;
}
