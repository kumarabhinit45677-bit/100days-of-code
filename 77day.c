#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error opening input.txt!\n");
        return 1;
    }

    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error creating output.txt!\n");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32; 
        }
        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("Conversion complete. Check output.txt\n");

    return 0;
}
