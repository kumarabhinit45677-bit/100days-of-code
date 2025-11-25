#include <stdio.h>

int main() {
    
    enum Operation { ADD, SUBTRACT, MULTIPLY };

    int choice, a, b;

    printf("Enter operation (0 = ADD, 1 = SUBTRACT, 2 = MULTIPLY): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}


