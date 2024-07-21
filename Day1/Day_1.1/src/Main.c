#include <stdio.h>
#include <stdlib.h>

// Structure declaration of employee
struct Employee
{
    char name[30];
    int empid;
    float salary;
};

// Function to accept information of employee using pointer
void accept_record(struct Employee *ptr)
{
    printf("Name            :   ");
    scanf("%s", ptr->name);

    printf("Employee id     :   ");
    scanf("%d", &ptr->empid);

    printf("Salary          :   ");
    scanf("%f", &ptr->salary);
};

// Function to display information of employee using pointer
void print_record(struct Employee *ptr)
{
    printf("Name            :   %s\n", ptr->name);
    printf("Employee id     :   %d\n", ptr->empid);
    printf("Salary          :   %.2f\n", ptr->salary);
}

// Function to accept the choice from the user
int menu_list(void)
{
    int choice;
    printf("0 . Exit\n");
    printf("1 . Accept record\n");
    printf("2 . Print record\n");
    printf("Enter choice    :   ");
    scanf("%d", &choice);
    return choice;
}

int main()
{
    int choice;
    struct Employee emp;
    while ((choice = menu_list()) != 0)
    {
        switch (choice)
        {
        case 1:
            accept_record(&emp);
            break;
        case 2:
            print_record(&emp);
            break;
        }
    }

    return 0;
}
