#include <stdio.h>
#include <string.h>

struct Account
{
    char name[50];
    int account_no;
    char account_type[50];
    float account_balance;
};

int count = 1000;

struct Bank
{
    int index;
    struct Account arr[5];
};

void accept_account_info(struct Account *ptrAccount)
{
    printf("Enter name of user      :");
    scanf("%s", ptrAccount->name);
    printf("Enter account type      :");
    scanf("%s", ptrAccount->account_type);
    printf("Enter account balance   :");
    scanf("%f", &ptrAccount->account_balance);
}

int create_account(struct Bank *ptrBank, struct Account account)
{
    account.account_no = ++count;
    ptrBank->arr[++ptrBank->index] = account;
    return account.account_no;
}

float deposit(struct Bank *ptrBank, int account_no, float amount)
{
    for (int i = 0; i <= ptrBank->index; i++)
    {
        if (ptrBank->arr[i].account_no == account_no)
        {
            ptrBank->arr[i].account_balance = ptrBank->arr[i].account_balance + amount;
            return ptrBank->arr[i].account_balance;
        }
    }
    return 0;
}

float withdraw(struct Bank *ptrBank, int account_no, float amount)
{
    for (int i = 0; i <= ptrBank->index; i++)
    {
        if (ptrBank->arr[i].account_no == account_no)
        {
            ptrBank->arr[i].account_balance = ptrBank->arr[i].account_balance - amount;
            return ptrBank->arr[i].account_balance;
        }
    }
    return 0;
}

struct Account get_account_details(struct Bank *ptrBank, int account_no)
{
    struct Account account = {};
    for (int i = 0; i <= ptrBank->index; i++)
    {
        if (ptrBank->arr[i].account_no == account_no)
        {
            account = ptrBank->arr[i];
        }
    }
    return account;
}

void print_account_info(struct Account *ptrAccount)
{
    printf("Username        :%s\n", ptrAccount->name);
    printf("Account number  :%d\n", ptrAccount->account_no);
    printf("Account type    :%s\n", ptrAccount->account_type);
    printf("Account balance :%f\n", ptrAccount->account_balance);
}

void accept_account_number(int *number)
{

    printf("Account no  :");
    scanf("%d", &number);
}

void accept_amount(float *amount)
{
    printf("Amount      :");
    scanf("%f", &amount);
}

void print_account_number(int number)
{
    printf("Account no  :%d\n", number);
}

void print_balance(float balance)
{
    printf("Balance     :%f\n", balance);
}

int menu_list()
{
    int choice;
    printf("0.Exit\n");
    printf("1.Create new account\n");
    printf("2.Deposit\n");
    printf("3.Withdraw\n");
    printf("4.Print account details\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    return choice;
}

int main()

{

    int choice;
    int account_no;
    float balance;
    float amount;
    struct Bank bank = {-1};
    bank.arr[0].account_balance = 100000;

    struct Account account;
    while ((choice = menu_list()))
    {
        switch (choice)
        {
        case 1:
            accept_account_info(&account);
            account_no = create_account(&bank, account);
            print_account_number(account_no);
            break;

        case 2:
            accept_account_number(&account_no);
            accept_amount(&amount);
            balance = deposit(&bank, account_no, amount);
            print_balance(balance);
            break;

        case 3:
            accept_account_number(&account_no);
            accept_amount(&amount);
            balance = withdraw(&bank, account_no, amount);
            print_balance(balance);
            break;

        case 4:
            accept_account_number(&account_no);
            account = get_account_details(&bank, account_no);
            print_account_info(&account);
            break;
        }
    }
    return 0;
}