#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int a[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int d = 0; d < n + m - 1; d++) {
        
        int r = (d < m) ? 0 : d - m + 1;
        int c = (d < m) ? d : m - 1;

    
        if (d % 2 == 0) {
            int i = r, j = c;
            while (i < n && j >= 0) {
                printf("%d ", a[i][j]);
                i++;
                j--;
            }
        }
        else {
            int i = (d < n) ? d : n - 1;
            int j = (d < n) ? 0 : d - n + 1;
            while (i >= 0 && j < m) {
                printf("%d ", a[i][j]);
                i--;
                j++;
            }
        }
    }

    return 0;
}
