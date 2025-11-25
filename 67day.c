#include <stdio.h>

int main() {
    int m, n;
    int nums1[1000], nums2[1000];
    printf("Enter number of elements in first array: ");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        scanf("%d", &nums1[i]);
    printf("Enter number of elements in second array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    int i = 0, j = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            printf("%d ", nums1[i]);
            i++;
        } else {
            printf("%d ", nums2[j]);
            j++;
        }
    }

    
    while (i < m) {
        printf("%d ", nums1[i]);
        i++;
    }

    while (j < n) {
        printf("%d ", nums2[j]);
        j++;
    }

    return 0;
}
