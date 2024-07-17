#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Account
{
    char name[50];
    int number;
    char type[50];
    float balance;
};
int count = 1000;
struct Bank
{
    struct Account *arr[5];
};
void accept_account_info(struct Account *ptrAccount)
{
    fflush(stdin);
    printf("Name	:	");
    scanf("%[^\n]%*c", ptrAccount->name);
    printf("Type	:	");
    scanf("%s", ptrAccount->type);
    printf("Balance	:	");
    scanf("%f", &ptrAccount->balance);
}
void print_account_info(struct Account *ptrAccount)
{
    printf("%-30s%-5d%-10s%-10.2f\n", ptrAccount->name, ptrAccount->number, ptrAccount->type, ptrAccount->balance);
}
void init_bank(struct Bank *ptrBank)
{
    for (int index = 0; index < 5; ++index)
        ptrBank->arr[index] = NULL;
}
int create_account(struct Bank *ptrBank, struct Account *ptrAccount)
{
    int index = 0;
    ptrAccount->number = ++count;
    while (ptrBank->arr[index] != NULL)
        ++index;
    ptrBank->arr[index] = ptrAccount;
    return ptrAccount->number;
}
float deposit(struct Bank *ptrBank, int number, float amount)
{
    int index = 0;
    while (ptrBank->arr[index] != NULL)
    {
        if (ptrBank->arr[index]->number == number)
        {
            ptrBank->arr[index]->balance += amount;
            return ptrBank->arr[index]->balance;
        }
        ++index;
    }
    return 0;
}
float withdraw(struct Bank *ptrBank, int number, float amount)
{
    int index = 0;
    while (ptrBank->arr[index] != NULL)
    {
        if (ptrBank->arr[index]->number == number)
        {
            ptrBank->arr[index]->balance -= amount;
            return ptrBank->arr[index]->balance;
        }
        ++index;
    }
    return 0;
}
struct Account *get_account_details(struct Bank *ptrBank, int number)
{
    int index = 0;
    while (ptrBank->arr[index] != NULL)
    {
        if (ptrBank->arr[index]->number == number)
            return ptrBank->arr[index];
        ++index;
    }
    return NULL;
}
void print_accounts(struct Bank *ptrBank)
{
    int index = 0;
    while (ptrBank->arr[index] != NULL)
    {
        print_account_info(ptrBank->arr[index]);
        ++index;
    }
}
void clean(struct Bank *ptrBank)
{
    int index = 0;
    while (ptrBank->arr[index] != NULL)
    {
        free(ptrBank->arr[index]);
        ptrBank->arr[index] = NULL;
    }
}
void accept_account_number(int *number)
{
    printf("Account number	:	");
    scanf("%d", number);
}
void accept_amount(float *amount)
{
    printf("Amount	:	");
    scanf("%f", amount);
}
void print_account_number(int number)
{
    printf("Account number	:	%d\n", number);
}
void print_balance(float balance)
{
    printf("Balance	:	%f\n", balance);
}
int menu_list(void)
{
    int choice;
    printf("0.Exit\n");
    printf("1.Create New Account\n");
    printf("2.Deposit\n");
    printf("3.Withdraw\n");
    printf("4.Print Account details\n");
    printf("5.Print Account(s)\n");
    printf("Enter choice	:	");
    scanf("%d", &choice);
    return choice;
}
int main(void)
{
    int choice, accNumber;
    float balance, amount;
    struct Bank *ptrBank = (struct Bank *)malloc(sizeof(struct Bank));
    while ((choice = menu_list()))
    {
        struct Account *ptrAccount = NULL;
        switch (choice)
        {
        case 1:
            ptrAccount = (struct Account *)malloc(sizeof(struct Account));
            accept_account_info(ptrAccount);
            accNumber = create_account(ptrBank, ptrAccount);
            print_account_number(accNumber);
            break;
        case 2:
            accept_account_number(&accNumber);
            accept_amount(&amount);
            balance = deposit(ptrBank, accNumber, amount);
            print_balance(balance);
            break;
        case 3:
            accept_account_number(&accNumber);
            accept_amount(&amount);
            balance = withdraw(ptrBank, accNumber, amount);
            print_balance(balance);
            break;
        case 4:
            accept_account_number(&accNumber);
            ptrAccount = get_account_details(ptrBank, accNumber);
            print_account_info(ptrAccount);
            break;
        case 5:
            print_accounts(ptrBank);
            break;
        }
    }
    clean(ptrBank);
    free(ptrBank);
    return 0;
}