#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[26] = {0}, freq2[26] = {0};
    int i = 0;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    
    while (str1[i] != '\0' && str1[i] != '\n') {
        char ch = str1[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32; 

        if (ch >= 'a' && ch <= 'z')
            freq1[ch - 'a']++;

        i++;
    }

    i = 0;

    while (str2[i] != '\0' && str2[i] != '\n') {
        char ch = str2[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z')
            freq2[ch - 'a']++;

        i++;
    }

    
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
