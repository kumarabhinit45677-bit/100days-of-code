#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        
        if (!(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')) {
            printf("%c", str[i]);
        }

        i++;
    }

    return 0;
}
