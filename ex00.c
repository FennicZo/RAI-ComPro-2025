#include<stdio.h>

int main() {
    struct profile{
    char name[20];
    int age;
    } s[10];
    int i;
    struct profile *sPtr;
    sPtr = s;
    for (i=0; i<10; i++) {
        printf("Student # %d\n\tName : ", i+1 );
        scanf("%s",sPtr->name);
        printf("\tAge : ");
        scanf("%d",&(sPtr->age));
        sPtr++;
    }
    sPtr -= 10;
    for (i=0; i<10; i++) {
        if ((sPtr->age) > 20)
            printf("\n%s, %d",sPtr->name,sPtr->age);
            sPtr++;
    }
    printf("\n");
    return 0;
}