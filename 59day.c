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
        printf("-1");
        return 0;
    }

    int windowSum = 0;

    for(int i = 0; i < k; i++)
        windowSum += arr[i];

    int maxSum = windowSum;

    for(int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if(windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%d", maxSum);

    return 0;
}
