
//Deque

#include <iostream>
#include <deque>

using namespace std;

void print(deque<int> deque) {
    for (auto i : deque) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    deque<int> queue;

    // push_back
    queue.push_back(10);
    queue.push_back(20);
    queue.push_back(30);
    queue.push_back(40);
}