#include <stdio.h>

int main() {
    
    enum Letters { A = 10, B, C };

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    return 0;
}
