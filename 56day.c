#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);        
    int arr[n], nge[n];     

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        nge[i] = -1;  
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                nge[i] = arr[j];
                break;  
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d", nge[i]);
        if(i != n - 1) printf(", ");
    }

    return 0;
}
