#include <stdio.h>

int main() {
    int n, target;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter target value: ");
    scanf("%d", &target);
    
    int first = -1, last = -1;
    
    for(int i = 0; i < n; i++) {
        if(nums[i] == target) {
            if(first == -1) first = i;  
            last = i;                    
        }
    }
    
    printf("%d,%d\n", first, last);
    
    return 0;
}
