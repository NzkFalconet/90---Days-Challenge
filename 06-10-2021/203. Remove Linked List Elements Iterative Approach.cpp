
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p =head;
        ListNode* prev=head;
        ListNode* link;
        //code to delete head element
        while(head!=NULL)
        {
            if(head->val==val)
            {
                head=head->next;
            }
            else
            {
                break;
            }
        }
        //code to delete other than head element
        while(p!=NULL)
        {

           //if current node's value is not same as target value
            if(p->val!=val)
            {
                //save the address of current node to prev pointer
                 prev=p;

            }

           //if current node's value is  same as target value
             if(p->val==val)
            {
                prev->next=p->next;

            }
            p=p->next;
        }
        return head;
    }
};
