
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
    cout << "Original deque : ";
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


    //emplace_back
    cout << "Emplace back : ";
    queue.emplace_back(60);
    queue.emplace_back(70);
    queue.emplace_back(80);
    print(queue);


    // emplace_front
    cout << "Emplace front : ";
    queue.emplace_front(90);
    queue.emplace_front(100);
    queue.emplace_front(110);
    print(queue);


    // pop_front
    cout << "Pop front : ";
    queue.pop_front();  // pop 110
    print(queue);

    
    // pop_back
    cout << "Pop back : ";
    queue.pop_back();  // pop 80
    print(queue);
}