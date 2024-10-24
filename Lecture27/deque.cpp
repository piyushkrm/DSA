
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
    cout << "Original deque : "
    deque<int> queue = {0};
    print(queue);

    // push_back
    cout << "Push back : ";
    queue.push_back(10);
    queue.push_back(20);
    queue.push_back(30);
    queue.push_back(40);
    print(queue);

    // push_front
    cout << "Push front : ";
    queue.push_front(5);
    queue.push_front(15);
    queue.push_front(25);
    queue.push_front(35);
    queue.push_front(45);
    print(queue);
}