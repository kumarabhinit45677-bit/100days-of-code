#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (n != m) {
        printf("False");
        return 0;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}
