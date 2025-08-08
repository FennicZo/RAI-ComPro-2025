#include <stdio.h>

int main () {

    int option;
    float bal = 0.0;
    float amt;

    while (1) {
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        
        printf("Choose an option: \n");
        scanf("%d", &option);

        if (option == 1) {
            printf("Current Balance: %.2f\n\n", bal);
        } 
        else if (option == 2) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amt);
            if (amt > 0) {
                bal += amt;
                printf("\n");
            } 
            else {
                printf("Invalid amount.\n\n");
            }
        } 
        else if (option == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amt);
            if (amt > 0 && amt <= bal) {
                bal -= amt;
                printf("Withdrawal successful.\n\n");
            } 
            else {
                printf("Invalid amount or insufficient balance.\n\n");
            }
        } 
        else if (option == 4) {
            printf("Thank you for using the ATM.\n");
            break;
        } 
        else {
            printf("Invalid option.\n\n");
        }
    }

    return 0;
}