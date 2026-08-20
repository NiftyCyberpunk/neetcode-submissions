/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> hash;
        Node* curr = head;
        while(curr != nullptr){
            Node* node = new Node(curr->val);
            hash[curr] = node;
            curr = curr->next;
        }
        curr = head;
        while(curr != nullptr){
            hash[curr]->next = hash[curr->next];
            hash[curr]->random = hash[curr->random];
            curr = curr->next;
        }

        return hash[head];
    }
};
