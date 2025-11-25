#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error creating file!");
        return 1;
    }

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %sAge: %d\n", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}
