#include <stdio.h>

int main() {
    int test = 0;

    printf("The address of test variable is at: %p\n", (void*)&test);

    return 0;
}