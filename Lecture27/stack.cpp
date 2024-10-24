

#include <iostream>
#include <stack>

using namespace std;


// print the element of the stack
void printStack(stack<int> stack) {
    while(!stack.empty()) {
        cout << stack.top() << " "; // print the top element of the stack
        stack.pop(); // remove the top element of the stack
    }
    cout << endl;
}

int main() {
    stack<int> stack;


    // push the element in the stack
    stack.push(10);
    stack.push(50);
    stack.push(15);
    stack.push(26);
    stack.push(59);
    stack.push(78);
    stack.push(95);

    // print the stack elements
    cout << "Original Stack: ";
    printStack(stack);

    //emplace_stack
    stack.emplace(30);
    stack.emplace(60);
    stack.emplace(80);
    stack.emplace(100);

    // print the stack elements after emplace_stack
    cout << "Stack after emplace_stack: ";
    printStack(stack);

}