#include <stdio.h>

int main() {
    int n, k, i;
    int arr[100], temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for(i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    for(i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
