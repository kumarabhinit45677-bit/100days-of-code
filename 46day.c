#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        
        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {
                printf("%c", ch);
                return 0;
            }
            freq[ch - 'a']++;
        }

        i++;
    }

    
    printf("-1");
    return 0;
}
