#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("After swap: %d %d", a, b);
    return 0;
}
