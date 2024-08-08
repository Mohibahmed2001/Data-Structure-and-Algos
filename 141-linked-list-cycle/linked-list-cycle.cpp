/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* next = head;
        ListNode* slow = head;

        while (next != nullptr && next->next != nullptr) {
            next = next->next->next;
            slow = slow->next;

            if (next == slow) {
                return true;
            }
        }

        return false;        
    }
};