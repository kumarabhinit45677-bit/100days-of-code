#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);       
    int nums[n], answer[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int prefix[n];
    prefix[0] = 1;
    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i-1] * nums[i-1];

    int suffix = 1;
    for(int i = n-1; i >= 0; i--) {
        answer[i] = prefix[i] * suffix;
        suffix *= nums[i];
    }
    printf("[");
    for(int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i != n-1) printf(",");
    }
    printf("]\n");

    return 0;
}
