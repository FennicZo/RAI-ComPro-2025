#include<stdio.h>

int main() {
    float point;
    char name[20];
    
    printf("Enter your name : ");
    scanf("%s",name);
    printf("Enter your point : ");
    scanf("%f",&point);

    printf("Name : %s\nPoint: %0.3f\n" ,name ,point);

    return 0;
}