

// Linked List

#include <iostream>

using namespace std;

class Node
{
public:
    int data;   // data
    Node *next; // pointer to next node

    Node(int d)
    { // constructor
        data = d;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    // Insertion at the beginning of the linked list (push_front in LinkedList)
    void push_front(int val)
    {
        Node *newNode = new Node(val); // create a new node with given value
        if (head == NULL)
        { // if list is empty
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }


    // Insertion at the end of the linked list (push_back in LinkedList)
    void push_back(int val) {
        Node *newNode = new Node(val); // create a new node with given value
        if (tail == NULL)
        { // if list is empty
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }


    // Print the list of nodes
    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(10);
    ll.push_back(5);

    cout << "Linked List: ";
    ll.printList();
}