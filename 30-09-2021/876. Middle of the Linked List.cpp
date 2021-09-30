
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int loc=count(head);
        int mid;
        if(loc&1){mid=(loc+1)/2;}
        else{mid=loc/2+1;}

        ListNode *temp=head;
               ListNode *ptr;

        for(int i=1;i<mid;++i)
        {

           temp=temp->next;
        }

        return temp ;


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
        return count1;
    }
};
