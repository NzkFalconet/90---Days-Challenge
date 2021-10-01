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

void Print()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void Swap()
{
    node *fast;
    fast=head;
    while(fast!=NULL  && fast->next!=NULL)
    {
        fast=fast->next->next;
    }
    cout<<fast->data;
}




int main()
{
    head=NULL;
    for(int i=1;i<=5;++i)
    {
        Insert(i);
    }
    Print();
    cout<<endl;
    Swap();
}
