#include <stdio.h>

int main() {
    enum TrafficLight { RED, YELLOW, GREEN };

    const char *lightNames[] = { "RED", "YELLOW", "GREEN" };

    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", lightNames[i], i);
    }

    return 0;
}
