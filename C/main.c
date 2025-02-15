#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User {
    char username[50];
    int pin;
};

// Function prototypes
void login(struct User user, char bill_username[]);
void registerAcc(struct User user);
void mainMenu(char bill_username[]);
int calculateBill(const char bill_username[]);
void payBill(const char bill_username[]);

int main() {
    char bill_username[50];
    struct User tuser;

    while (1) {
        int choice;
        printf("\n\n\n\nMAIN MENU: \n\n");
        printf("1. Login\n");
        printf("2. Register\n");
        printf("3. Exit\n");
        printf("Enter a choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Username: ");
                scanf("%s", tuser.username);
                printf("4 digit pin: ");
                scanf("%d", &tuser.pin);
                login(tuser, bill_username);
                if (strlen(bill_username) > 0)
                    mainMenu(bill_username);
                else
                    printf("Login failed.\n");
                break;
            case 2:
                printf("Enter a username: ");
                scanf("%s", tuser.username);
                printf("Enter a 4 digit pin: ");
                scanf("%d", &tuser.pin);
                registerAcc(tuser);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid input\n");
        }
    }

    return 0;
}

void registerAcc(struct User user) {
    FILE *file = fopen("users_temp.txt", "a");
    if (file == NULL) {
        printf("\n\nError opening file.\n");
        return;
    }
    fprintf(file, "%s %d\n", user.username, user.pin);
    printf("User successfully registered.\n\n");
    fclose(file);
}

void login(struct User user, char bill_username[]) {
    char current_username[50];
    int current_pin;
    FILE *file = fopen("users_temp.txt", "r");
    if (file != NULL) {
        while (fscanf(file, "%s %d", current_username, &current_pin) != EOF) {
            if (strcmp(user.username, current_username) == 0 && user.pin == current_pin) {
                printf("Logged in....\n");
                strcpy(bill_username, current_username);
                fclose(file);
                return;
            }
        }
        fclose(file);
    } else {
        printf("User not found!\n");
    }
}

void mainMenu(char bill_username[]) {
    int choice;
    int bill;
    while(1){
    printf("\n\n\n\n\nChoose an option: \n");
    printf("1. Calculate Bill\n");
    printf("2. Pay Bill\n");
    printf("3. Exit\n");
    printf("Enter an option: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            bill = calculateBill(bill_username);
            printf("Your total bill is: %d\n", bill);
            break;
        case 2:
            payBill(bill_username);
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid input\n");
    }
    }
}

int calculateBill(const char bill_username[]) {
    int units;
    printf("Enter the units consumed: ");
    scanf("%d", &units);
    int bill = units * 50;
    FILE *file = fopen("Bills.txt", "w");
    fprintf(file, "%s %d\n", bill_username, bill);
    fclose(file);
    return bill;
}

void payBill(const char bill_username[]) {
    char current_username[50];
    int bill;
    FILE *file = fopen("Bills.txt", "r");
    if (file != NULL) {
        while (fscanf(file, "%s %d", current_username, &bill) != EOF) {
            if (strcmp(bill_username, current_username) == 0) {
                printf("%s has paid the bill of amount %d.\n", bill_username, bill);
                fclose(file);
                return;
            }
        }
        printf("Bill not found.\n");
        fclose(file);
    } else {
        printf("Bills file not found.\n");
    }
}
