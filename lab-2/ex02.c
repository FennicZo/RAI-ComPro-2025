#include <stdio.h>

int main() {
    int ttlmin, hrs, mins;
   
    printf("Enter total minutes: ");
    scanf("%d", &ttlmin);

    hrs = ttlmin / 60;
    mins = ttlmin % 60;

    // Output result
    printf("%d minutes is %d hour(s) and %d minute(s)\n", ttlmin, hrs, mins);

    return 0;
}