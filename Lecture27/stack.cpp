

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
    stack<int> stack1;


    // push the element in the stack
    stack1.push(10);
    stack1.push(50);
    stack1.push(15);
    stack1.push(26);
    stack1.push(59);
    stack1.push(78);
    stack1.push(95);

    // print the stack elements
    cout << "Original Stack: ";
    printStack(stack1);

    //emplace_stack
    stack1.emplace(30);
    stack1.emplace(60);
    stack1.emplace(80);
    stack1.emplace(100);

    // print the stack elements after emplace_stack
    cout << "Stack after emplace_stack: ";
    printStack(stack1);

    // top of stack
    cout << "Top element of stack: " << stack1.top() << endl;

    //pop the stack element
    stack1.pop();
    cout << "Stack after pop: ";
    printStack(stack1);

    // size of stack
    cout << "Size of stack: " << stack1.size() << endl;

    // empty
    cout << "Is stack empty? : " << (stack1.empty()? "Yes" : "No") << endl;

    //swap stack
    stack<int> stack2;
    stack2.push(40);
    stack2.push(70);
    stack2.push(100);
    stack2.push(130);
    stack1.swap(stack2);
    cout << "Stack1 after swap: ";
    printStack(stack1);
    cout << "Stack2 after swap: ";
    printStack(stack2);

}