#include <iostream>
using namespace std;

class Exception
{
private:
    string message;

public:
    Exception(string message = "") : message(message) {}
    string getMessage(void) const throw()
    {
        return this->message;
    }
};

class LinkedList
{
private:
    class Node
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
        friend class Iterator;
    };

private:
    Node *head;
    Node *tail;

public:
    class Iterator
    {
    private:
        Node *trav;

    public:
        Iterator(Node *node) throw()
        {
            this->trav = node;
        }
        bool operator!=(Iterator &other) const throw()
        {
            return this->trav != other.trav;
        }
        int operator*(void) const throw()
        {
            return this->trav->data;
        }
        void operator++(void)
        {
            this->trav = this->trav->next;
        }
    };

public:
    LinkedList(void) : head(NULL), tail(NULL) {}
    bool empty(void) const throw()
    {
        return this->head == NULL;
    }
    void add_last(int data) throw(bad_alloc)
    {
        Node *newNode = new Node(data);
        if (this->empty())
        {
            this->head = newNode;
        }
        else
        {
            this->tail->next = newNode;
        }
        this->tail = newNode;
    }
    // void print_list(void) const throw(Exception)
    // {
    //     if (this->empty())
    //     {
    //         throw Exception("Linked list is empty");
    //     }
    //     Node *trav = this->head;
    //     while (trav != NULL)
    //     {
    //         cout << trav->data << "" << endl;
    //         trav = trav->next;
    //     }
    // }
    void remove_first(void) throw(Exception)
    {
        if (this->empty())
        {
            throw Exception("Linked list is empty");
        }
        else if (this->head == this->tail)
        {
            delete this->head;
            this->head = NULL;
            this->tail = NULL;
        }
        else
        {
            Node *ptrNode = this->head;
            this->head = this->head->next;
            delete ptrNode;
        }
    }
    Iterator begin(void)
    {
        Iterator itr(this->head);
        return itr;
    }
    Iterator end(void)
    {
        Iterator itr(NULL);
        return itr;
    }
    ~LinkedList(void)
    {
        while (!this->empty())
        {
            this->remove_first();
        }
    }
};
int main()
{
    LinkedList list;
    list.add_last(10);
    list.add_last(20);
    list.add_last(30);
    // list.remove_first();

    LinkedList::Iterator itr_start = list.begin();
    LinkedList::Iterator itr_end = list.end();
    while (itr_start != itr_end)
    {
        cout << (*itr_start) << " ";
        ++itr_start;
    }
    cout << endl;
    return 0;
}