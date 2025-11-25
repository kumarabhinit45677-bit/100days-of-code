#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] >= 'a' && str[0] <= 'z')
        printf("%c", str[0] - 32); 
    else
        printf("%c", str[0]);

    printf(".");

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ' && str[i+1] != '\0' && str[i+1] != '\n') {
            char ch = str[i+1];
            if (ch >= 'a' && ch <= 'z')
                ch = ch - 32; 
            printf("%c.", ch);
        }
        i++;
    }

    return 0;
}
