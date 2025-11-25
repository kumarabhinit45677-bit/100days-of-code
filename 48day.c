#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, start = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {

        if (str[i] == ' ') {
            int left = start, right = i - 1;

            while (left < right) {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }

            start = i + 1; 
        }
        i++;
    }

    int left = start, right = i - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }

    printf("%s", str);
    return 0;
}
