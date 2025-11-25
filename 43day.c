#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, start = 0, end;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }

    end = i - 1;  


    while (start < end) {
        if (str[start] != str[end]) {
            printf("Not palindrome");
            return 0;
        }
        start++;
        end--;
    }

    printf("Palindrome");
    return 0;
}
