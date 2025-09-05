#include <stdio.h>

int main() {
    struct book {
        char name[50];
        float price;
        float discount;
    } book1;
    
    printf ("Enter book name : ");
    scanf ("%s",book1.name);
    printf ("Enter book price : ");
    scanf ("%f",&book1.price);
    
    book1.discount = 0.1*book1.price;
    printf ("\n\n\n\nBook : %s\n",book1.name);
    printf ("Price : %.2f\n",book1.price);
    printf ("Discount 10 percent : %.2f\n"

    "Total price : %.2f\n",
    book1.discount,
    book1.price - book1.discount);

    return 0;
}