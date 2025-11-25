#include <stdio.h>

int main() {
    char filename[100], text[1000];
    FILE *fp;

    
    printf("Enter file name: ");
    scanf("%s", filename);
    getchar(); 

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
