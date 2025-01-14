// LeetCode Problem 206: Reverse Linked List

#include <iostream>
using namespace std;

// Definition for singly-linked list
class ListNode {
public:
    int val;              // Value of the node
    ListNode* next;       // Pointer to the next node

    ListNode(int val) {   // Constructor
        this->val = val;
        this->next = nullptr;
    }
};

class Solution {
public:
    // Function to reverse the linked list
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        while (curr != nullptr) {
            next = curr->next; // Save the next node
            curr->next = prev; // Reverse the link
            prev = curr;       // Move prev forward
            curr = next;       // Move curr forward
        }
        
        return prev; // New head of the reversed list
    }
};

// Helper function to print the linked list
void printList(ListNode* node) {
    while (node != nullptr) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);

    // Connect nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    // Print original list
    cout << "Original List: ";
    printList(node1);

    // Reverse the linked list
    Solution solution;
    ListNode* reversedHead = solution.reverseList(node1);

    // Print reversed list
    cout << "Reversed List: ";
    printList(reversedHead);

    return 0;
}
