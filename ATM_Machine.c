#include <stdio.h>

int main()
{
    int pin = 1234;
    int enteredPin;
    int choice;
    float balance = 5000;
    float amount;

    printf("===== WELCOME TO ATM =====\n");

    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin == pin)
    {
        printf("\nLogin Successful!\n");

        while (1)
        {
            printf("\n===== ATM MENU =====\n");
            printf("1. Check Balance\n");
            printf("2. Deposit Money\n");
            printf("3. Withdraw Money\n");
            printf("4. Exit\n");

            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("Your Balance is: Rs. %.2f\n", balance);
                    break;

                case 2:
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);

                    if (amount > 0)
                    {
                        balance = balance + amount;
                        printf("Money Deposited Successfully!\n");
                    }
                    else
                    {
                        printf("Invalid Amount!\n");
                    }
                    break;

                case 3:
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);

                    if (amount > 0 && amount <= balance)
                    {
                        balance = balance - amount;
                        printf("Please Collect Your Money!\n");
                    }
                    else
                    {
                        printf("Insufficient Balance or Invalid Amount!\n");
                    }
                    break;

                case 4:
                    printf("Thank You for Using ATM!\n");
                    return 0;

                default:
                    printf("Invalid Choice! Try Again.\n");
            }
        }
    }
    else
    {
        printf("Incorrect PIN! Access Denied.\n");
    }

    return 0;
}
