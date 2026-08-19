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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr != nullptr){
            curr = curr->next;
            len++;
        }
        curr = head;
        int index = len - n;
        if(index == 0)return head->next;
        
        for(int i = 0; i < index; i++){
            prev = curr;
            curr = curr->next;
        }

        ListNode* temp = curr->next;
        prev->next = temp;

        return head;
    }
};
