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
    ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode*dummy = new ListNode(0);
        ListNode* cur = dummy;
        int remainder=0;
        while(list1||list2||remainder){
            int sum =remainder;
            if(list1){
                sum = sum+ list1->val;
                list1 = list1->next;
            }
            if(list2){
                sum = sum+list2->val;
                list2 = list2->next;
            }
            cur->next = new ListNode(sum%10);
            remainder = sum/10;
            cur = cur->next;

        }
        return dummy->next;
    }
};
