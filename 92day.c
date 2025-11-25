#include <stdio.h>

// Define Student structure
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];

    
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%d", &students[i].marks);

        printf("\n");
    }

    printf("Name\tRoll Number\tMarks\n");
    printf("-------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t\t%d\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
