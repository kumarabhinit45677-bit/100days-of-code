#include <stdio.h>

int main() {
    int n, arr[1000];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int visited[10000] = {0}; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (visited[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;  
        }
        visited[arr[i]] = 1;
    }

    return 0;
}
