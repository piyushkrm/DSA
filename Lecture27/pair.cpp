

// pair

#include <iostream>
#include <vector>
#include <utility>  // for pair
#include <string>  // for string

using namespace std;

int main() {
    pair<int, int> p = {1, 8};
    cout << "First element: " << p.first << endl;
    cout << "Second element: " << p.second << endl;

    pair<int, char> p2 = {18, 'P'};
    cout << "First element: " << p2.first << endl;
    cout << "Second element: " << p2.second << endl;

    // pair of pair
    pair<int, pair<float, char>> p3 = {10, {15.5, 'F'}};
    cout << "First element: " << p3.first << endl;
    cout << "Second element: " << p3.second.first << endl;
    cout << "Third element: " << p3.second.second << endl;


    //vector pair
    vector<pair<int, string>> vecPair = {{1, "John"}, {2, "David"}, {3, "Emma"}};
    for (auto p : vecPair) {
        cout << "First element: " << p.first << ", Second element: " << p.second << endl;
    }
}