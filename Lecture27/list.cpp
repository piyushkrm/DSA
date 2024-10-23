

// list container

#include <iostream>
#include <list>
using namespace std;

// Function to print elements of a list

void printList(list<int>& list) {
    for (int ls : list) {
        cout << ls << " ";
    }
    cout << endl;
}


void listFunctions(list<int>& list) {
    // push_back
    list.push_back(6);
    cout << "After push back, Size of list: " << list.size() << endl;
    printList(list);


    // pop_back
    list.pop_back();
    cout << "After pop back, Size of list: " << list.size() << endl;
    printList(list);


    // emplace_back
    list.emplace_back(7);
    cout << "After emplace back, Size of list: " << list.size() << endl;
    printList(list);


    // emplace_front
    list.emplace_front(0);
    cout << "After emplace front, Size of list: " << list.size() << endl;
    printList(list);

    // size of list
    cout << "Size of list: " << list.size() << endl;


    // erase list 
    list.erase(list.begin());
    cout << "After erase, Size of list: " << list.size() << endl;
    printList(list);


    // clear list
    list.clear();
    cout << "After clear, Size of list: " << list.size() << endl;
    printList(list);


    // begin list
    cout << "Front element of list: " << *list.begin() << endl;

    // end list
    cout << "Back element of list: " << *list.rbegin() << endl;

    // rbegin element of list
    cout << "Last element of list (reverse order): " << *(--list.end()) << endl;

    // rend element of list
    cout << "First element of list (reverse order): " << *(list.rend()) << endl;

    // insert element at specific position
    list.insert(list.begin(), 8);
    cout << "After insert, Size of list: " << list.size() << endl;
    printList(list);

    return;
}

int main() {
    list<int> myList = {1, 2, 3, 4, 5};
    printList(myList);
}