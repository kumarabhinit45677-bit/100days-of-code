#include <stdio.h>
#include <stdlib.h>


struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;
    FILE *fp;

    printf("Enter name: ");
    scanf("%s", emp.name);

    printf("Enter ID: ");
    scanf("%d", &emp.id);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Employee data stored successfully in employee.dat\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    struct Employee readEmp;
    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Employee data read from file:\n");
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", 
           readEmp.name, readEmp.id, readEmp.joiningDate.day, readEmp.joiningDate.month, readEmp.joiningDate.year);

    return 0;
}
