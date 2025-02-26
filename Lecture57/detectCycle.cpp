

// LeetCode problem 141:- Detect Cycle in the LinkedList

#include <iostream>

using namespace std;

// Definition for singly-linked list.
class ListNode {
    public:
        int val;
        ListNode* next;

        ListNode(int val) {
            this->val = val;
            this->next = nullptr;
        }
};

class Solution {
    public:
        bool hasCycle(ListNode* head) {
            ListNode* slow = head;
            ListNode* fast = head;

            while (fast != nullptr && fast->next != nullptr) {
                slow = slow->next;
                fast = fast->next->next;

                if (slow == fast) {
                    return true; // Cycle detected
                }
            }
            return false; // No cycle detected
        }
};

// Print the Node of the linked list
    void printList(ListNode* node) {
        while (node!=nullptr) {
            cout << node->val << " ";
            node = node->next;
        }
        cout << endl;
    }


int main() {
    // Creating a linked list
    ListNode* head = new ListNode(3);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(0);
    ListNode* fourth = new ListNode(4);
    ListNode* fifth = new ListNode(8);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = third; // Creating a cycle here   
    // cout << "Linked List: ";
    // printList(head);

    Solution solution;
    bool hasCycle = solution.hasCycle(head);
    cout << "Cycle in the linked list: " << (hasCycle? "Yes" : "No") << endl;

    return 0;
}