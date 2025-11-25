#include <stdio.h>

int main() {
    // Define enum for status
    enum Status { SUCCESS, FAILURE, TIMEOUT };

    int status;
    printf("Enter status (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    scanf("%d", &status);

    switch (status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Invalid status\n");
            break;
    }

    return 0;
}
