#include <stdio.h>

int main() {
    float balance, minimum_balance = 500.00;

    // Input current account balance
    printf("Enter the account balance: ");
    scanf("%f", &balance);

    // Check if balance is greater or lesser than the minimum balance
    if (balance >= minimum_balance)
        printf("The account balance is greater than or equal to the minimum balance.\n");
    else
        printf("The account balance is lesser than the minimum balance.\n");

    return 0;
}
