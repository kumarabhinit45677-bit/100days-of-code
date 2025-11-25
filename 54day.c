#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    double temp = sqrt((double)n * (n + 1) / 2);
    int x = (int)temp;

    if(x * x == n * (n + 1) / 2) {
        printf("%d\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}
