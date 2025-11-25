#include <stdio.h>

int main() {
    int r, c, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf(" The sum of matrix is: %d", sum);

    return 0;
}
