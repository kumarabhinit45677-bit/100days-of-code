#include <stdio.h>

int main() {
    char str[1000];
    printf("Input your string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;

    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }

    while (str[i] != '\0') {
    
        if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z') {
            str[i + 1] = str[i + 1] - 32;
        }
        i++;
    }

    printf("%s", str);

    return 0;
}
