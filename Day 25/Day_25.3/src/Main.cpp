#include <iostream>
using namespace std;

class Product
{
private:
    string title;
    float price;

public:
    void accept_record(void)
    {
        cout << "Title      :   ";
        cin >> this->title;
        cout << "Price      :   ";
        cin >> this->price;
    }
    void print_record(void)
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
    void accept_record(void)
    {
        Product::accept_record();
        cout << "Page count :   ";
        cin >> this->page_count;
    }
    void print_record(void)
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
    void accept_record(void)
    {
        Product::accept_record();
        cout << "Play time  :   ";
        cin >> this->playtime;
    }
    void print_record(void)
    {
        cout << "-----------------" << endl;
        Product::print_record();
        cout << "Play time  :   " << this->playtime << endl;
    }
};
int main()
{
    // Book book;
    // book.accept_record();
    // book.print_record();
    // // -------------------------------------------
    Tape tape;
    tape.accept_record();
    tape.print_record();
    return 0;
}
