/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next_iter = nullptr;

        // 0 > 1 > 2 > 3
        while (current != nullptr) // current: 0
        {
            next_iter = current->next; // 2
            current->next = prev; // 0
            prev = current; // 1 
            current = next_iter; // 2
        }

        return prev;
    }
};
