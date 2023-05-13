#include <stdio.h>

int main() {
    int balance = 5000;
    int pin = 1234;
    int option, amount, newPin;

    printf("Welcome to the ATM!\n");

    while (1) {
        printf("Please enter your PIN: ");
        scanf("%d", &pin);

        if (pin != 1234) {
            printf("Incorrect PIN. Please try again.\n");
            continue;
        }

        printf("What would you like to do?\n");
        printf("1. Check balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Change PIN\n");
        printf("5. Exit\n");

        printf("Enter option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Your balance is $%d\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);

                if (amount > balance) {
                    printf("Insufficient funds\n");
                } else {
                    balance -= amount;
                    printf("Please take your cash. Your new balance is $%d\n", balance);
                }

                break;
            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);

                balance += amount;
                printf("Deposit successful. Your new balance is $%d\n", balance);
                break;
            case 4:
                printf("Enter new PIN: ");
                scanf("%d", &newPin);

                pin = newPin;
                printf("PIN changed successfully\n");
                break;
            case 5:
                printf("Thank you for using the ATM!\n");
                return 0;
            default:
                printf("Invalid option\n");
                break;
        }
    }