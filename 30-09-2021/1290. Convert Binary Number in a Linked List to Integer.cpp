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
    int getDecimalValue(ListNode* head) {
       int power=count(head);
      ListNode *temp=head;
        int prod=1;
        int sum=0;

        while(temp!=NULL)
        {

            prod=((temp->val)*pow(2,power));
            sum=prod+sum;
            power--;
            temp=temp->next;

        }
        return sum;

    }

    int count(ListNode* head)
    {
        ListNode *temp=head;
        int count1=0;
        while(temp!=NULL)
        {
            count1++;
            temp=temp->next;
        }
        return count1-1;
    }
};
