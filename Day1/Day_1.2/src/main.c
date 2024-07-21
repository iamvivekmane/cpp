#include "../include/Employee.h"
#include "../include/IOOPERATION.h"
#include <stdio.h>

enum IOOPERATION menu_list()
{

    enum IOOPERATION choice;
    printf("Enter choice    :   \n");
    printf("0 .  Exit\n");
    printf("1 .  Accept record\n");
    printf("2 .  Print record\n");
    scanf("%d", &choice);
    return choice;
}

int main()
{
    int choice;
    struct Employee e1;
    while ((choice = menu_list()) != EXIT)
    {
        switch (choice)
        {
        case ACCEPT:
            accept_record(&e1);
            break;

        case PRINT:
            print_record(&e1);
            break;
        }
    }
    return 0;
}