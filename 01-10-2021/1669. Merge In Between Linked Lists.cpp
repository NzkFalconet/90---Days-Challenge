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
    ListNode* mergeInBetween(ListNode* head, int a, int b, ListNode* head1) {
            ListNode *ptr1,*ptr2,*link;
      ListNode *temp=head;
  for(int i=0;i<b;++i)
    {
          if(i==a-1)
        {
            ptr1=temp;
        }
        temp=temp->next;
    }


    ptr2=temp->next;


    ptr1->next=head1;
    link=head1;
    while(link->next!=NULL)
    {

        link=link->next;

    }
    link->next=ptr2;

return head;

    }
};
