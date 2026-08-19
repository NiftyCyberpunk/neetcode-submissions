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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* curr = &dummy;

        int carry = 0;
        while(l1 != nullptr && l2 != nullptr){
            int digit1 = l1->val;
            int digit2 = l2->val;

            int sum = digit1 + digit2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode* node = new ListNode(digit);
            curr->next = node;
            curr = curr->next;

            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1 != nullptr){
            int sum = l1->val + carry;

            int digit = sum % 10;
            carry = sum / 10;

            ListNode* node = new ListNode(digit);
            curr->next = node;
            curr = curr->next;

            l1 = l1->next;
        }

        while(l2 != nullptr){
            int sum = l2->val + carry;

            int digit = sum % 10;
            carry = sum / 10;

            ListNode* node = new ListNode(digit);
            curr->next = node;
            curr = curr->next;

            l2 = l2->next;
        }

        if(carry != 0){
            ListNode* node = new ListNode(carry);
            curr->next = node;
        }
        
        return dummy.next;
    }
};
