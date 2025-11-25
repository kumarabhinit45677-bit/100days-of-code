#include <stdio.h>

int main() {
    
    enum Status { SUCCESS, FAILURE, TIMEOUT };

    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);

    return 0;
}
