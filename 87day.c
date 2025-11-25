#include <stdio.h>

int main() {
    
    enum Role { ADMIN, USER, GUEST };

    int role;
    printf("Enter role (0 = ADMIN, 1 = USER, 2 = GUEST): ");
    scanf("%d", &role);

    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid role!\n");
            break;
    }

    return 0;
}
