//ATM Menu
#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0, amount;

    printf("\n------ Simple ATM Menu ------\n");
    printf("1. Withdraw\n");
    printf("2. Deposit\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > balance) {
                printf("Insufficient balance!\n");
            } else {
                balance -= amount;
                printf("You withdrew %.2f\n", amount);
                printf("Remaining balance: %.2f\n", balance);
            }
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("You deposited %.2f\n", amount);
            printf("New balance: %.2f\n", balance);
            break;

        case 3:
            printf("Current balance: %.2f\n", balance);
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
