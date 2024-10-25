

// Priority queue

#include<iostream>
#include<queue>
using namespace std;


// Function to print priority queue
void printQueue(priority_queue<int> queue) {
    while(!queue.empty()) {
        cout << queue.top() << " ";
        queue.pop(); // remove the top element
    }
    cout << endl;
 
}


int main() {
    // Declare priority queue with integer data type
    priority_queue<int> pq;

    // push the elements in the priority queue
    pq.push(10);
    pq.push(50);
    pq.push(15);
    pq.push(26);
    pq.push(59);
    pq.push(78);
    pq.push(95);
    
    // print the priority queue elements
    cout << "Priority queue elements: ";
    printQueue(pq);

    // emplace the priority queue elements
    pq.emplace(30);
    pq.emplace(60);
    pq.emplace(80);
    pq.emplace(100);
    
    // print the priority queue elements after emplace
    cout << "Priority queue elements after emplace: ";
    printQueue(pq);

    // top level elements
    cout << "Top element of priority queue: " << pq.top() << endl;
}