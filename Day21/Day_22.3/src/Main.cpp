#include <iostream>
using namespace std;

template <class T>
class LinkedList;

template <class T>
class Node
{
private:
    T data;
    Node *next;

public:
    Node(T data = T())
    {
        this->data = data;
        this->next = NULL;
    }
    friend class LinkedList<T>;
};
template <class T>
class LinkedList
{
private:
    Node<T> *head;
    Node<T> *tail;

public:
    LinkedList(void)
    {
        this->head = NULL;
        this->tail = NULL;
    }
    void add_first(T data)
    {
        Node<T> *newNode = new Node<T>(data);
        if (this->head == NULL)
        {
            this->head = newNode;
        }
        else
        {
            this->tail->next = newNode;
        }
        this->tail = newNode;
    }
    void print_record(void)
    {
        Node<T> *trav = this->head;
        while (trav != NULL)
        {
            T data = trav->data;
            cout << data << " ";
            trav = trav->next;
        }
        cout << endl;
    }
};
int main()
{
    LinkedList<int> list;
    list.add_first(10);
    list.add_first(20);
    list.add_first(30);
    list.add_first(40);
    list.print_record();
    return 0;
}