#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;

    for(int i = 0; i < n; i++) {
        int freq[256] = {0};
        int currLen = 0;

        for(int j = i; j < n; j++) {
            if(freq[(unsigned char)s[j]] == 1) {
                break; 
            }
            freq[(unsigned char)s[j]] = 1;
            currLen++;
        }

        if(currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d", maxLen);

    return 0;
}
