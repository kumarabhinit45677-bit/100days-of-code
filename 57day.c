#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);        
    int arr[n], pge[n];     

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        pge[i] = -1;  
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                pge[i] = arr[j];
                break;  
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d", pge[i]);
        if(i != n - 1) printf(", ");
    }

    return 0;
}
