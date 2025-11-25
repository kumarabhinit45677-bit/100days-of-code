#include <stdio.h>

int main() {
    int ch;

    printf("Enter characters (end with newline):\n");
    while ((ch = getchar()) != '\n' && ch != EOF) {
        printf("%c\n", ch);
    }

    return 0;
}
