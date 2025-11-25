#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i = 0, lastSpace = -1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ')
            lastSpace = i;
        i++;
    }

    i = 0;
    while (i < lastSpace) {
        if (i == 0 || str[i-1] == ' ') {
            char ch = str[i];
            if (ch >= 'a' && ch <= 'z')
                ch = ch - 32; 
            printf("%c.", ch);
        }
        i++;
    }

    if (lastSpace != -1) {
        int start = lastSpace + 1;
        while (str[start] == ' ') start++;
        i = start;

        while (str[i] != '\0' && str[i] != '\n') {
            printf("%c", str[i]);
            i++;
        }
    }

    return 0;
}
