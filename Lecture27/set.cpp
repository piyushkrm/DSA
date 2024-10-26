

#include <iostream>
#include <set>

using namespace std;

//  print elements of the sets
void printElements(set<int>& elements) {
    for (auto element : elements) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    set<int> s;
    s.insert(10);
    s.insert(50);
    s.insert(30);
    s.insert(12);
    s.insert(20);
    s.insert(40);
    cout << "Original set: ";
    printElements(s);

    // count
    cout << "Count of 20: " << s.count(20) << endl;

    // erasing 20 
    s.erase(20);
    cout << "After erasing 20: ";
    printElements(s);

    // find 20
    if (s.find(20)  != s.end()) {
        cout << "20 found in the set" << endl;
    } else {
        cout << "20 not found in the set" << endl;
    }
}