#include <stdio.h>

int main() {
    int nums[1000], n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);            
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);   
    }
    printf("Enter target value: ");
    scanf("%d", &target);         

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1");
    return 0;
}
