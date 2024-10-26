

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

// print multiset elements

void printMultisetElements(multiset<int>& elements) {
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

    // empty set 
    if (s.empty()) {
        cout << "The set is empty" << endl;
    } else {
        cout << "The set is not empty" << endl;
    }

    // size check
    cout << "Size of the set: " << s.size() << endl;

    // lower bound
    auto lower_bound = s.lower_bound(15);
    cout << "Lower bound of 15: ";
    if (lower_bound!= s.end()) {
        cout << *lower_bound << endl;
    } else {
        cout << "Lower bound does not exist" << endl;
    }

    // upper bound
    auto upper_bound = s.upper_bound(35);
    cout << "Upper bound of 35: ";
    if (upper_bound!= s.end()) {
        cout << *upper_bound << endl;
    } else {
        cout << "Upper bound does not exist" << endl;
    }

    // Multi set
    multiset<int> ms;
    ms.insert(10);
    ms.insert(50);
    ms.insert(30);
    ms.insert(12);
    ms.insert(20);
    ms.insert(40);
    ms.insert(20);  // duplicates are allowed
    cout << "Multi set: ";
    printMultisetElements(ms);


    // unordered ser
    unordered_set<int> us;
    us.insert(10);
    us.insert(50);
    us.insert(30);
    us.insert(12);
    us.insert(20);
    us.insert(40);

}