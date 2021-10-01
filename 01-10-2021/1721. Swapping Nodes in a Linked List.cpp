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
    ListNode* swapNodes(ListNode* head, int k) {
         ListNode *temp=head;
int count1;
    while(temp!=NULL)
    {
        count1++;
        temp=temp->next;
    }
    ListNode *f;
    ListNode *s;
    f=head;
   s=head;
    for(int i=0;i<count1-k;++i)
    {

        f=f->next;
    }
    for(int i=0;i<k-1;++i)
    {

         s=s->next;
    }

    int x;
         x=f->val;
        f->val=s->val;
        s->val=x;
        return head;
    }
};
