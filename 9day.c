#include <stdio.h>

int main() {
    int per;
    printf("Enter percentage: ");
    scanf("%d", &per);

    if (per >= 90 && per <= 100)
        printf("Grade A");
    else if (per >= 80)
        printf("Grade B");
    else if (per >= 70)
        printf("Grade C");
    else if (per >= 60)
        printf("Grade D");
    else
        printf("Grade F");

    return 0;
}
