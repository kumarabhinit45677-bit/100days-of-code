#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%d", &students[i].marks);

        printf("\n");
    }

    struct Student topper = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > topper.marks) {
            topper = students[i];
        }
    }

    printf("Topper: %s (Marks: %d)\n", topper.name, topper.marks);

    return 0;
}
