

// pair

#include <iostream>
using namespace std;

int main() {
    pair<int, int> p = {1, 8};
    cout << "First element: " << p.first << endl;
    cout << "Second element: " << p.second << endl;

    pair<int, char> p2 = {18, 'P'};
    cout << "First element: " << p2.first << endl;
    cout << "Second element: " << p2.second << endl;
}