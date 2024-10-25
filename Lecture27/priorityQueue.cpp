

// Priority queue

#include<iostream>
#include<queue>
using namespace std;


// Function to print priority queue
int void printQueue(priority_queue<int> queue) {
    while(!queue.empty()) {
        cout << queue.top() << " ";
        queue.pop(); // remove the top element
    }
    cout << endl;
 
}


int main() {
    // Declare priority queue with integer data type
    priority_queue<int> pq;

}