#include <stdio.h>
#define PI 3.14

float calculateCircumference(float radius) {
    return 2 * PI * radius;
}

float calculateArea(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius;
    printf("Enter the radius in cm: ");
    scanf("%f", &radius);

    printf("Circumference: %.2f\n", calculateCircumference(radius));
    printf("Area: %.2f\n", calculateArea(radius));

    return 0;
}