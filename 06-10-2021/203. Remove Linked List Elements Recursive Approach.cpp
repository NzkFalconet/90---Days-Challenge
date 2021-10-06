
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        //Base Case - if head is NUll return head pointer
        if(head==NULL)
        {
            return head;
        }
        //storing the very first node after removing the target node
        ListNode* h= removeElements(head->next,val);

        //if value of the head is equal to target then return the very first pointer after tha head which is "h
        if(head->val==val)
            return h;
        // else we will add the next pointer of head to first node after removing the target node
            head->next=h;
        return head;
    }
};
