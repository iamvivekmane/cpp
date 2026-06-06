#include <iostream>
using namespace std;

class Product
{
private:
    string title;
    float price;

public:
    virtual void accept_record(void)
    {
        cout << "Title      :   ";
        cin >> this->title;
        cout << "Price      :   ";
        cin >> this->price;
    }
    virtual void print_record(void)
    {
        cout << "Title      :   " << this->title << endl;
        cout << "Price      :   " << this->price << endl;
    }
};
class Book : public Product
{
private:
    int page_count;

public:
    Book(void) : page_count(0) {}
    virtual void accept_record(void)
    {
        Product::accept_record();
        cout << "Page count :   ";
        cin >> this->page_count;
    }
    virtual void print_record(void)
    {
        cout << "-----------------" << endl;
        Product::print_record();
        cout << "Page count :   " << this->page_count << endl;
    }
};
class Tape : public Product
{
private:
    int playtime;

public:
    Tape(void) : playtime(0) {}
    virtual void accept_record(void)
    {
        Product::accept_record();
        cout << "Play time  :   ";
        cin >> this->playtime;
    }
    virtual void print_record(void)
    {
        cout << "-----------------" << endl;
        Product::print_record();
        cout << "Play time  :   " << this->playtime << endl;
    }
};
int menu_list(void)
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Book" << endl;
    cout << "2.Tape" << endl;
    cout << "Choice     :   ";
    cin >> choice;
    return choice;
}
int main()
{
    // int choice;
    // while ((choice = menu_list()) != 0)
    // {
    //     Book book;       // 32 Bytes
    //     Tape tape;       // 32 Bytes
    //     switch (choice)
    //     {
    //     case 1:
    //         book.accept_record();
    //         book.print_record();
    //         break;
    //     case 2:
    //         tape.accept_record();
    //         tape.print_record();
    //         break;
    //     }
    // }
    // // --------------------------------------------------------------------

    // int choice;
    // while ((choice = menu_list()) != 0)
    // {
    //     Book *book = NULL;   // 8 Bytes
    //     Tape *tape = NULL;   // 8 Bytes
    //     switch (choice)
    //     {
    //     case 1:
    //         book = new Book();
    //         book->accept_record();
    //         book->print_record();
    //         delete book;
    //         break;
    //     case 2:
    //         tape = new Tape;
    //         tape->accept_record();
    //         tape->print_record();
    //         delete tape;
    //         break;
    //     }
    // }
    // // --------------------------------------------------------------------

    // int choice;
    // while ((choice = menu_list()) != 0)
    // {
    //     Product *ptr = NULL;
    //     switch (choice)
    //     {
    //     case 1:
    //         ptr = new Book();
    //         ptr->accept_record();
    //         ptr->print_record();
    //         delete ptr;
    //         break;
    //     case 2:
    //         ptr = new Tape();
    //         ptr->accept_record();
    //         ptr->print_record();
    //         delete ptr;
    //         break;
    //     }
    // }
    // // --------------------------------------------------------------------

    int choice;
    while ((choice = menu_list()) != 0)
    {
        Product *ptr = NULL;
        switch (choice)
        {
        case 1:
            ptr = new Book(); // Upcasting
            break;
        case 2:
            ptr = new Tape(); // Upcasting
            break;
        }
        if (ptr != NULL)
        {
            ptr->accept_record();
            ptr->print_record();
            delete ptr;
        }
    }
    return 0;
}
