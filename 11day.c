#include <stdio.h>

int main() {
    float cp, sp, profit, loss, percent;

    printf("Enter Cost Price and Selling Price: "); 
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        profit = sp - cp;
        percent = (profit / cp) * 100;
        printf("Profit %.0f%%", percent);
    } 
    else if (sp < cp) {
        loss = cp - sp;
        percent = (loss / cp) * 100;
        printf("Loss %.0f%%", percent);
    } 
    else {
        printf("No Profit No Loss");
    }

    return 0;
}
