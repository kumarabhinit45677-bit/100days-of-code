#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int num = 2, dnm = 3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (float)num / dnm;
        num = num + 2;
        dnm = dnm + 4;
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}
