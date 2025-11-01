#include <stdio.h>

int main() {
    float p, r, t, si, ci, amount;
    int i;
    printf("Enter principal, rate of interest and time in years: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;

    amount = p;
    for (i = 1; i <= t; i++) {
        amount = amount * (1 + r / 100);
    }
    ci = amount - p;

    printf("Simple Interest=%.2f, Compound Interest=%.2f", si, ci);
    return 0;
}
