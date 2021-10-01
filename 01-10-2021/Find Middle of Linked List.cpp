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
        temp->next=NULL;
        head=temp;
        return ;
    }
    node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;

}

void Print(node *ptr)
{
    node *temp=ptr;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void MiddleElement()
{
    node* temp=head;
    node* fast , *slow;
    fast=head;
    slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    Print(slow);
}


int main()
{
    head=NULL;
    for(int i=1;i<=6;++i)
    {
        Insert(i);
    }
    Print(head);
    cout<<endl;
    MiddleElement();

}
