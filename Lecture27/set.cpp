

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
}