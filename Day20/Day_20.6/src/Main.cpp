#include <iostream>
#include <string>
using namespace std;
class StackOverflowException
{
private:
    string message;

public:
    StackOverflowException(string message = "StackOverflow Exception") : message(message) {}
    string get_message(void) const throw()
    {
        return this->message;
    }
};
class StackUnderflowException
{
private:
    string message;

public:
    StackUnderflowException(string message = "StackUnderflow Exception") : message(message) {}
    string get_message(void) const throw()
    {
        return this->message;
    }
};
template <typename T>
class Stack
{
private:
    int top;
    int size;
    T *arr;

public:
    Stack(int size) throw(bad_alloc)
    {
        this->top = -1;
        this->size = size;
        this->arr = NULL;
        if (this->size > 0)
        {
            this->arr = new T[this->size];
        }

        this->arr = new int[this->size];
    }
    bool empty(void) const throw()
    {
        return this->top == -1;
    }
    bool full(void) const throw()
    {
        return this->top == this->size - 1;
    }
    void push(T data) throw(StackOverflowException)
    {
        if (this->full())
        {
            throw StackOverflowException("Stack is full");
        }
        this->arr[this->top++] = data;
    }
    T peek(void) const throw(StackUnderflowException)
    {
        if (this->empty())
        {
            throw StackUnderflowException("Stack is empty");
        }

        return this->arr[this->top];
    }
    void pop(void) throw(StackUnderflowException)
    {
        if (this->empty())
        {
            throw StackUnderflowException("Stack is empty");
        }
        this->top--;
    }
    ~Stack(void) throw()
    {
        if (this->arr != NULL)
        {
            delete[] this->arr;
            arr = NULL;
        }
    }
};
void accept_record(int &data)
{
    cout << "Element        :   ";
    cin >> data;
}
void print_record(const int &data)
{
    cout << "Popped element :   " << data << endl;
}
int menu_list(void)
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Push" << endl;
    cout << "2.Pop" << endl;
    cout << "Choice         :   ";
    cin >> choice;
    return choice;
}
int main()
{
    int choice;
    int data;
    Stack<int> s1(5);
    while ((choice = menu_list()) != 0)
    {
        try
        {
            switch (choice)
            {
            case 1:
                accept_record(data);
                s1.push(data);
                break;
            case 2:
                data = s1.peek();
                print_record(data);
                s1.pop();
                break;
            }
        }
        catch (StackOverflowException &ex)
        {
            cout << ex.get_message() << endl;
        }
        catch (StackUnderflowException &ex)
        {
            cout << ex.get_message() << endl;
        }
    }

    return 0;
}