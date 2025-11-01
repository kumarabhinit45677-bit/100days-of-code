#include <stdio.h>

int main() {
    float a, b, c, d, r1, r2, sqrt_d, i;
    printf("Enter coefficients a, b and c: ");

    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0) {
        // find square root manually
        sqrt_d = d / 2;
        for (i = 0; i < 10; i++) {
            sqrt_d = 0.5 * (sqrt_d + d / sqrt_d);
        }

        r1 = (-b + sqrt_d) / (2*a);
        r2 = (-b - sqrt_d) / (2*a);
        printf("Roots are real and different: %.2f, %.2f", r1, r2);
    }
    else if (d == 0) {
        r1 = -b / (2*a);
        printf("Roots are real and same: %.2f", r1);
    }
    else {
        printf("Roots are complex");
    }

    return 0;
}
