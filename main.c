#include <stdio.h>

// Structure for Bank Account
struct account {
    int acc_no;
    char name[30];
    float balance;
};

int main() {
    struct account a[20];
    int count = 0;
    int choice;
    int search_acc, i, found;
    float amt;

    while (1) {
        printf("\n=============================\n");
        printf("    BANK MANAGEMENT SYSTEM   \n");
        printf("=============================\n");
        printf("1. Create New Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Check Single Account\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter Account Number: ");
                scanf("%d", &a[count].acc_no);
                printf("Enter Account Holder Name: ");
                scanf("%s", a[count].name);
                printf("Enter Initial Balance: ");
                scanf("%f", &a[count].balance);
                count++;
                printf("Account Created Successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("\nNo accounts available!\n");
                } else {
                    printf("\n--- ALL ACCOUNT DETAILS ---\n");
                    for (i = 0; i < count; i++) {
                        printf("\nAccount Number: %d\n", a[i].acc_no);
                        printf("Name          : %s\n", a[i].name);
                        printf("Balance       : %2f\n", a[i].balance);
                    }
                }
                break;

            case 3:
                printf("\nEnter Account Number: ");
                scanf("%d", &search_acc);
                found = 0;

                for (i = 0; i < count; i++) {
                    if (a[i].acc_no == search_acc) {
                        printf("Enter Amount to Deposit: ");
                        scanf("%f", &amt);
                        a[i].balance = a[i].balance + amt;
                        printf("Deposit Successful! New Balance: %2f\n", a[i].balance);
                        found = 1;
                        break;
                    }
                }

                if (found == 0) {
                    printf("Account Not Found!\n");
                }
                break;

            case 4:
                printf("\nEnter Account Number: ");
                scanf("%d", &search_acc);
                found = 0;

                for (i = 0; i < count; i++) {
                    if (a[i].acc_no == search_acc) {
                        printf("Enter Amount to Withdraw: ");
                        scanf("%f", &amt);
                        if (amt <= a[i].balance) {
                            a[i].balance = a[i].balance - amt;
                            printf("Withdrawal Successful! Remaining Balance: %2f\n", a[i].balance);
                        } else {
                            printf("Insufficient Balance!\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if (found == 0) {
                    printf("Account Not Found!\n");
                }
                break;

            case 5:
                printf("\nEnter Account Number: ");
                scanf("%d", &search_acc);
                found = 0;

                for (i = 0; i < count; i++) {
                    if (a[i].acc_no == search_acc) {
                        printf("\n--- Account Info ---\n");
                        printf("Account Number: %d\n", a[i].acc_no);
                        printf("Name          : %s\n", a[i].name);
                        printf("Current Balance: %2f\n", a[i].balance);
                        found = 1;
                        break;
                    }
                }

                if (found == 0) {
                    printf("Account Not Found!\n");
                }
                break;

            case 6:
                printf("\nThank you for using Bank Management System!\n");
                return 0;

            default:
                printf("\nInvalid Choice! Please enter between 1 to 6.\n");
        }
    }

    return 0;
}