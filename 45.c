#include <stdio.h>

int main() {
    char str[1000];
    char ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to count: ");
    scanf("%c", &ch);

    
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("%d", count);

    return 0;
}
