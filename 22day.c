#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int num = 1, den = 2;  

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + (float)num / den;
        num += 2;
        den += 2;
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}
