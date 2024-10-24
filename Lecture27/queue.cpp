

// queue

#include <iostream>
#include <queue>

using namespace std;

// Function to print queue
void printQueue(queue<int> que) {
    while(!que.empty()) {
        cout << que.front() << " ";
        que.pop(); // remove front element
    }
}

int main() {
    // Declare queue variables
    queue<int> q;

    // push the element to the queue
    q.push(13);
    q.push(10);
    q.push(22);
    q.push(30);
    q.push(13);
    q.push(20);
    q.push(25);
    cout << "Queue elements are: ";
    printQueue(q);

    // emplace function
    q.emplace(15);
    q.emplace(75);
    cout << "\nQueue elements after emplace: ";
    printQueue(q);

    //front element
    cout << "\nFront element: " << q.front();

    //pop function to remove element from the queue
    q.pop();
    cout << "\nQueue elements after pop: ";
    printQueue(q);

    // size of queue
    cout << "\nSize of queue: " << q.size();

    // empty function
    cout << "\nIs queue empty? " << (q.empty()? "Yes" : "No");

    // swap function
    queue<int> q2;
    q2.push(40);
    q2.push(50);
    q.swap(q2);
    cout << "\nQueue elements after swap: ";
    printQueue(q);
    
}