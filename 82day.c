#include <stdio.h>

int main() {
    
    enum TrafficLight { RED, YELLOW, GREEN };

    int light;
    printf("Enter traffic light ( RED=0,YELLOW=1,GREEN=2): ");
    scanf("%d", &light);

    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid input!\n");
            break;
    }

    return 0;
}

