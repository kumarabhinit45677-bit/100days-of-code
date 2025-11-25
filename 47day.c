#include <stdio.h>

int main() {
    char str[100];
    char longest[100];
    int i = 0, start = 0, len = 0;
    int maxStart = 0, maxLen = 0;
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    while (str[i] != '\0') {
        
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        } else {
            len++;
        }
        i++;
    }

    if (len > maxLen) {
        maxLen = len;
        maxStart = start;
    }

    if (maxLen == 0) {
        return 0;
    }

    for (i = 0; i < maxLen; i++) {
        longest[i] = str[maxStart + i];
    }
    longest[maxLen] = '\0';

    printf("%s\n", longest);
    return 0;
}
