#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Account
{
    char name[50];
    int Account_number;
    char Account_type[50];
    float Account_balance;
};
int count = 1000;

struct Bank
{
    struct Account *arr[5];
};

void accept_account_info(struct Account *ptrAcc)
{
    printf("Name             :");
    scanf("%s", ptrAcc->name);
    printf("Account type     :");
    scanf("%s", ptrAcc->Account_type);
    printf("Account balance   :");
    scanf("%f", &ptrAcc->Account_balance);
}
void init_bank(struct Bank *ptrBank)
{
    for (int i = 0; i < 5; ++i)
    {
        ptrBank->arr[i] = NULL;
    }
}
int create_account(struct Bank *ptrBank, struct Account *ptrAcc)
{
    int index = 0;
    ptrAcc->Account_number = ++count;
    while (ptrBank->arr[index] != NULL)
    {
        ++index;
        ptrBank->arr[index] = ptrAcc;
        return ptrAcc->Account_number;
    }
}

float deposit(struct Bank *ptrBank, int account_number_m, float amount)
{
    int index = 0;
    while (ptrBank->arr[index] != NULL)
    {
        if (ptrBank->arr[index]->Account_number == account_number_m)
        {
            ptrBank->arr[index]->Account_balance += amount;
            return ptrBank->arr[index]->Account_balance;
        }
        ++index;
    }
    return 0;
}

float withdraw(struct Bank *ptrBank, int account_number_m, float amount)
{
    int index = 0;
    while (ptrBank->arr[index] != NULL)
    {
        if (ptrBank->arr[index]->Account_number == account_number_m)
        {
            ptrBank->arr[index]->Account_balance -= amount;
            return ptrBank->arr[index]->Account_balance;
        }
        ++index;
    }
    return 0;
}

struct Account *get_account_details(struct Bank *ptrBank, int account_number_m)
{
    int index = 0;
    while (ptrBank->arr[index] != NULL)
    {
        if (ptrBank->arr[index]->Account_number == account_number_m)
        {
            return ptrBank->arr[index];
        }
        ++index;
    }
    return NULL;
}

void print_account_info(struct Account *ptrAcc)
{
    printf("Name            : %s\n", ptrAcc->name);
    printf("Account number  : %d\n", ptrAcc->Account_number);
    printf("Account type    : %s\n", ptrAcc->Account_type);
    printf("Account balance : %f\n", ptrAcc->Account_balance);
}

void accept_account_number(int *number)
{
    printf("Enter account number\n");
    scanf("%d", number);
}

void accept_amount(float *amount)
{
    printf("Enter the amount\n");
    scanf("%f", amount);
}

void print_account_number(int number)
{
    printf("Account number  : %d\n", number);
}

void print_balance(float balance)
{
    printf("Balance         : %f\n", balance);
}

int menu_list()
{
    int choice;
    printf("Enter your choice\n");
    printf(" 0 .Exit\n");
    printf(" 1 .Create new account\n");
    printf(" 2 .Deposit\n");
    printf(" 3 .Withdraw\n");
    printf(" 4 .print account details\n");
    scanf("%d", &choice);
    return choice;
}
int main()
{
    int choice;
    int account_number_m;
    float amount;
    float balance;

    struct Bank *ptrBank = (struct Bank *)malloc(sizeof(struct Bank));

    struct Account account;

    while ((choice = menu_list()))
    {
        struct Account *ptrAccount = NULL;
        switch (choice)
        {
        case 1:
            ptrAccount = (struct Account *)malloc(sizeof(struct Account));
            accept_account_info(&account);
            account_number_m = create_account(ptrBank, ptrAccount);
            print_account_number(account_number_m);
            break;

        case 2:
            accept_account_number(&account_number_m);
            accept_amount(&amount);
            balance = deposit(ptrBank, account_number_m, amount);
            print_balance(balance);
            break;

        case 3:
            accept_account_number(&account_number_m);
            accept_amount(&amount);
            balance = withdraw(ptrBank, account_number_m, amount);
            print_balance(balance);
            break;

        case 4:
            accept_account_number(&account_number_m);
            ptrAccount = get_account_details(ptrBank, account_number_m);
            print_account_info(&account);
            break;
        }
    }
    // clean(ptrBank);
    // free(ptrBank);

    return 0;
}