#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);       
    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the size: ");
    scanf("%d", &k);      

    if(k > n || k <= 0) {
        return 0;
    }

    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];

        for(int j = i + 1; j < i + k; j++) {
            if(arr[j] > max)
                max = arr[j];
        }

        printf("%d", max);
        if(i != n - k) printf(" ");
    }

    return 0;
}
