#include <stdio.h>

int main() {
    int n, x;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter target value: ");
    scanf("%d", &x);
    
    int left = 0, right = n - 1;
    int ceilIndex = -1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] >= x) {
            ceilIndex = mid;   
            right = mid - 1;   
        } else {
            left = mid + 1;
        }
    }
    
    printf("%d\n", ceilIndex);
    
    return 0;
}
