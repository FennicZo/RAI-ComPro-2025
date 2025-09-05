#include <stdio.h>

struct Point {
    float x;
    float y;
};

float my_sqrt(float number) {
    float x = number;
    float y = 1.0;
    float e = 0.00001;
    while (x - y > e || y - x > e) {
        x = (x + y) / 2;
        y = number / x;
    }
    return x;
}

int main() {
    struct Point p1, p2;
    float dx, dy, distance;

    printf("x1: ");
    scanf("%f", &p1.x);
    printf("y1: ");
    scanf("%f", &p1.y);

    printf("x2: ");
    scanf("%f", &p2.x);
    printf("y2: ");
    scanf("%f", &p2.y);

    dx = p2.x - p1.x;
    dy = p2.y - p1.y;

    distance = my_sqrt(dx * dx + dy * dy);

    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n",
           p1.x, p1.y, p2.x, p2.y, distance);

    return 0;
}