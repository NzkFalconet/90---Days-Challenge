#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head;

void Insert(int x)
{
    node *temp= new node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    {

        head=temp;

    }
    else
    {

         node *temp1= head;
        while(temp1->next!= NULL)
        {
            temp1=temp1->next;

        }
         temp1->next=temp;

    }

}

void print(node* head)
{
   if(head==NULL)
   {
       return;
   }
   cout<<head->data<<" ";

   print(head->next);
}

void Reverse(node* p)
{
    if(p->next==NULL)
    {
        head=p;
        return;
    }
    Reverse(p->next);
    node* q = p->next;
    q->next=p;
    p->next=NULL;
}



int main()
{
    head=NULL;
    for(int i=0;i<5;++i)
    {

        Insert(i);

    }
    //print(head);
    node* p =head;
    Reverse(p);
    print(head);

}
