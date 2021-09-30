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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp,*ptr,*link,*prev;
        temp=head;
        ptr=head;
        if(head==NULL)
        {
            return head;
        }
        temp=temp->next;
        while(temp!=NULL)
        {
            if(temp->val==ptr->val)
            {
                link=temp->next;
                prev=temp;
                temp=link;
                ptr->next=link;
             delete prev;
            }
            else
            {
                temp=temp->next;
                ptr=ptr->next;
            }
        }
        return head;
    }
};
