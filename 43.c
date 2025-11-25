#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }

    j = i - 1;  
    int start = 0;

    while (start < j) {
        temp = str[start];
        str[start] = str[j];
        str[j] = temp;

        start++;
        j--;
    }

    
    for (int k = 0; k < i; k++) {
        printf("%c", str[k]);
    }

    return 0;
}
