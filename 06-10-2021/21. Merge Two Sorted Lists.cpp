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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode(0);
        ListNode* ptr= temp;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<=l2->val)
            {
                ptr->next=new ListNode(l1->val);
                l1=l1->next;
            }
            else
            {
                  ptr->next=new ListNode(l2->val);
                l2=l2->next;
            }
            ptr=ptr->next;
        }
        if(l1==NULL)
        {
            ptr->next=l2;
        }
        if(l2==NULL)
        {
            ptr->next=l1;
        }
        return temp->next;
    }
};
