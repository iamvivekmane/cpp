#include <stdio.h>
#include <string.h>
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
    int index;
    struct Account arr[5];
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

int create_account(struct Bank *ptrBank, struct Account account)
{
    account.Account_number = ++count;
    ptrBank->arr[++ptrBank->index] = account;
    return account.Account_number;
}

float deposit(struct Bank *ptrBank, int account_number_m, float amount)
{

    for (int i = 0; i <= ptrBank->index; ++i)
    {
        if (ptrBank->arr[i].Account_number == account_number_m)
        {
            ptrBank->arr[i].Account_balance += amount;
            return ptrBank->arr[i].Account_balance;
        }
    }
    return 0;
}

float withdraw(struct Bank *ptrBank, int account_number_m, float amount)
{
    for (int i = 0; i <= ptrBank->index; ++i)
    {
        if (ptrBank->arr[i].Account_number == account_number_m)
        {
            ptrBank->arr[i].Account_balance -= amount;
            return ptrBank->arr[i].Account_balance;
        }
    }
    return 0;
}

struct Account get_account_details(struct Bank *ptrBank, int account_number_m)
{
    struct Account account = {};
    for (int i = 0; i <= ptrBank->index; ++i)
    {
        if (ptrBank->arr[i].Account_number == account_number_m)
        {
            account = ptrBank->arr[i];
        }
    }
    return account;
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

    struct Bank bank = {-1};
    bank.arr[0].Account_balance = 10000;
    struct Account account;

    while ((choice = menu_list()))
    {
        switch (choice)
        {
        case 1:
            accept_account_info(&account);
            account_number_m = create_account(&bank, account);
            print_account_number(account_number_m);
            break;

        case 2:
            accept_account_number(&account_number_m);
            accept_amount(&amount);
            balance = deposit(&bank, account_number_m, amount);
            print_balance(balance);
            break;

        case 3:
            accept_account_number(&account_number_m);
            accept_amount(&amount);
            balance = withdraw(&bank, account_number_m, amount);
            print_balance(balance);
            break;

        case 4:
            accept_account_number(&account_number_m);
            account = get_account_details(&bank, account_number_m);
            print_account_info(&account);
            break;
        }
    }

    return 0;
}