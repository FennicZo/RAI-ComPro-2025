#include <stdio.h>

struct Vector {
    float x;
    float y;
};

int main() {
    struct Vector u, v, sum;

    printf("u_x: ");
    scanf("%f", &u.x);
    printf("u_y: ");
    scanf("%f", &u.y);

    printf("v_x: ");
    scanf("%f", &v.x);
    printf("v_y: ");
    scanf("%f", &v.y);

    sum.x = u.x + v.x;
    sum.y = u.y + v.y;

    printf("Resultant vector is equivalence to %.1fi + %.1fj\n", sum.x, sum.y);

    return 0;
}