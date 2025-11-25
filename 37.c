#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    int rowSum[r];

    
    for(int i = 0; i < r; i++) {
        rowSum[i] = 0; 
        for(int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
