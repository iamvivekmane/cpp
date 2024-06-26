#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[30];
    int empid;
    float salary;
};

void accept_record(struct employee *e1)
{
    printf("Enter the name of the employee\n");
    scanf("%s", e1->name);

    printf("Enter the empid of the employee\n");
    scanf("%d", &e1->empid);

    printf("Enter the salary of the employee\n");
    scanf("%f", &e1->salary);
};

void print_record(struct employee *e1)
{
    printf("The name of the employee is %s\n", e1->name);
    printf("The empid of the employee is %d\n", e1->empid);
    printf("The salary of the employee is %f\n", e1->salary);
};

int menu_list()
{

    int choice;
    printf("Enter the choice\n");
    printf("0: exit\n");
    printf("1: Accept record\n");
    printf("2: Print record\n");
    scanf("%d", &choice);
    return choice;
}

int main()
{
    int choice;
    struct employee e1;
    while ((choice = menu_list()) != 0)
    {
        switch (choice)
        {
        case 1:
            accept_record(&e1);
            break;

        case 2:
            print_record(&e1);
            break;
        }
    }

    return 0;
}