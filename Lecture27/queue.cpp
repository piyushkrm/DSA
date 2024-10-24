

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
    queue<int> q = {10, 20, 30, 40, 50};


    
}