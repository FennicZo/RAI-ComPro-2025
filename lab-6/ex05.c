#include <stdio.h>

struct Time {
    int minute;
    int second;
};

int main() {
    struct Time times[3];
    int totalSeconds = 0;

    for (int i = 0; i < 3; i++) {
        printf("Time input (m:s): ");
        scanf("%d:%d", &times[i].minute, &times[i].second);

        totalSeconds += times[i].minute * 60 + times[i].second;
    }

    printf("Total time elapsed: %d second(s)\n", totalSeconds);

    return 0;
}