class Solution {
public:
    void deleteNode(ListNode* node) {
           node->val=node->next->val;  //copy value from 1 to 5 now node->val=5;
         ListNode* temp=node->next;  //new pointer which will store addr of next node
          node->next=temp->next; // copy address of next node to current node
          delete temp; // deleting next node
    }
};
