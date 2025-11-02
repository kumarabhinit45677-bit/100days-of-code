#include <stdio.h>

int main() {
    int i, j, space;

    for (i = 1; i <= 5; i++) {
        for (space = i; space < 5; space++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--) {
        for (space = 5; space > i; space--) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
