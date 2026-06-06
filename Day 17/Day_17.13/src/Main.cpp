#include <iostream>
using namespace std;

class Exception
{
private:
    string message;

public:
    Exception(string message) throw() : message(message)
    {
    }
    string get_message(void) const throw()
    {
        return this->message;
    }
};
class LinkedList // Top level class
{
private:
    class Node // Nested class
    {
    private:
        int data;
        Node *next;

    public:
        Node(int data = 0) throw()
        {
            this->data = data;
            this->next = NULL;
        }
        friend class LinkedList;
    };

private:
    Node *head;
    Node *tail;

public:
    LinkedList(void) throw()
    {
        this->head = NULL;
        this->tail = NULL;
    }
    bool empty(void) const throw()
    {
        return this->head == NULL;
    }
    void add_last(int data) throw(bad_alloc)
    {
        Node *new_node = new Node(data);
        if (this->empty())
        {
            this->head = new_node;
        }
        else
        {
            this->tail->next = new_node;
        }
        this->tail = new_node;
    }
    void remove_first(void) throw(Exception)
    {
        if (this->empty())
        {
            throw Exception("Linked list is empty");
        }
        else if (this->head == this->tail)
        {
            delete this->head;
            this->head = this->tail = NULL;
        }
        else
        {
            Node *ptr_node = this->head;
            this->head = this->head->next;
            delete ptr_node;
        }
    }
    void print(void) const throw(Exception)
    {
        if (this->empty())
        {
            throw Exception("Linked list is empty");
        }
        Node *trav = this->head;
        while (trav != NULL)
        {
            cout << trav->data << "     ";
            trav = trav->next;
        }
        cout << endl;
    }
    ~LinkedList(void) throw()
    {
        while (!this->empty())
        {
            this->remove_first();
        }
    }
};
int main()
{
    try
    {
        LinkedList list;
        list.add_last(10);
        list.add_last(20);
        list.add_last(30);
        list.print();
    }
    catch (Exception &ex)
    {
        cout << ex.get_message() << endl;
    }

    return 0;
}