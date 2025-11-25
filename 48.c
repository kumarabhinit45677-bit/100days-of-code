#include <stdio.h>

int main() {
    char str1[1000], str2[1000], concat[2000];
    int len1 = 0, len2 = 0, i = 0, j, k;
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    while (str1[len1] != '\0' && str1[len1] != '\n')
        len1++;

    while (str2[len2] != '\0' && str2[len2] != '\n')
        len2++;
    
        if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }
    for (i = 0; i < len1; i++)
        concat[i] = str1[i];

    for (j = 0; j < len1; j++)
        concat[i + j] = str1[j];

    concat[len1 * 2] = '\0';

    for (i = 0; i < len1 * 2; i++) {
        k = 0;
        while (k < len2 && concat[i + k] == str2[k])
            k++;

        if (k == len2) {
            printf("Rotation");
            return 0;
        }
    }
    printf("Not rotation");
    return 0;
}
