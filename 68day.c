#include <stdio.h>

int main() {
    int n, arr[1000];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2; 

    printf("%d", total - sum);

    return 0;
}
