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

    // Insertion at the beginning of the linked list
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

    // Insertion at the end of the linked list
    void push_back(int val)
    {
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

    // Deletion from the beginning of the linked list
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "Empty list" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head == NULL)
        { // if list becomes empty
            tail = NULL;
        }
        delete temp;
    }

    // Deletion from the end of the linked list
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "Empty list" << endl;
            return;
        }
        if (head->next == NULL)
        { // if only one node in the list
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        tail = temp;
    }

    // Insert node at the middle of the linked list
    void insertAtMiddle(int val, int position)
    {
        if (position < 0)
        {
            cout << "Invalid position" << endl;
            return;
        }

        if (position == 0)
        {
            push_front(val);
            return;
        }

        Node *temp = head;
        for (int i = 1; i < position && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "Position exceeds the size of the list." << endl;
            return;
        }

        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == NULL)
        {
            tail = newNode; // Update tail if new node is added at the end
        }
    }

    // Print the list of nodes
    void printList()
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
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

    ll.pop_front();
    cout << "After pop_front: ";
    ll.printList();

    ll.pop_back();
    cout << "After pop_back: ";
    ll.printList();

    ll.insertAtMiddle(4, 2);
    cout << "After insertAtMiddle: ";
    ll.printList();

    return 0;
}
