

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

    
}

int main() {
    list<int> myList = {1, 2, 3, 4, 5};
    printList(myList);
}