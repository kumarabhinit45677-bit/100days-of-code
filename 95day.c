#include <stdio.h>

// Define Student structure
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

// Function to find the top student
struct Student getTopStudent(struct Student students[], int n) {
    struct Student topper = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > topper.marks) {
            topper = students[i];
        }
    }
    return topper;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
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


    struct Student topper = getTopStudent(students, n);

    
    printf("Top Student: %s | Roll: %d | Marks: %d\n", topper.name, topper.roll_no, topper.marks);

    return 0;
}
