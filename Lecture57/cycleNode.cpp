
// Find cycle node LeetCode problem 142

#include <iostream>

using namespace std;

// Definition for singly-linked list
class ListNode {
    public:
        int val;
        ListNode* next;

        ListNode(int val) {
            this->val = val;
            this->next = nullptr;
        }
};



// Function to find the cycle node in a linked list

class Solution {
    public:
        ListNode * cycleNode(ListNode * head) {
            ListNode* slow = head;
            ListNode* fast = head;
            bool isCycle = false;

            while (fast != nullptr && fast->next != nullptr) {
                slow = slow->next;
                fast = fast->next->next;

                if (slow == fast) {
                    isCycle = true;
                    break;
                }
            }

            if (!isCycle) {
                return nullptr;
            }


            slow = head;
            while (slow!= fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
};


int main() {
    ListNode* head = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);
    ListNode* tail = new ListNode(8);

    // Connection of nodes
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node2;

    Solution solution;
    ListNode* result = solution.cycleNode(head);
    cout << "Cycle node value: " << result->val << endl;


}