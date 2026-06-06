#include <iostream>
using namespace std;
class Book
{
private:
    string title;
    float price;
    int page_count;

public:
    Book(void) : title(""), price(0), page_count(0) {}
    void accept_record(void)
    {
        cout << "Title      :   ";
        cin >> this->title;
        cout << "Price      :   ";
        cin >> this->price;
        cout << "Page count :   ";
        cin >> this->page_count;
    }
    void print_record(void)
    {
        cout << "-----------------" << endl;
        cout << "Title      :   " << this->title << endl;
        cout << "Price      :   " << this->price << endl;
        cout << "Page count :   " << this->page_count << endl;
    }
};
class Tape
{
private:
    string title;
    float price;
    int playtime;

public:
    Tape(void) : title(""), price(0), playtime(0) {}
    void accept_record(void)
    {
        cout << "Title      :   ";
        cin >> this->title;
        cout << "Price      :   ";
        cin >> this->price;
        cout << "Play time  :   ";
        cin >> this->playtime;
    }
    void print_record(void)
    {
        cout << "-----------------" << endl;
        cout << "Title      :   " << this->title << endl;
        cout << "Price      :   " << this->price << endl;
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