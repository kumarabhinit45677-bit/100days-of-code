#include <stdio.h>

int main() {
    int n, pos, i;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position\n");
        return 0;
    }

    for(i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; 

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
