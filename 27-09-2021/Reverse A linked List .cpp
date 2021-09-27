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
    node *temp=new node();
    temp->data= x;
    temp->next=NULL;
    if(head==NULL)
    {
        temp->next=head;
        head=temp;
        return;
    }
    node *temp1= head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;

    }
    temp1->next=temp;

}

void Reverse()
{
    node *prev, *link;
    node *temp=head;
    prev=NULL;
    while(temp!=NULL)
    {
        link=temp->next;
        temp->next=prev;
        prev=temp;
        temp=link;
    }
    head=prev;
}

void print()
{
    node *temp2= head;
    while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
}

int main()
{
    head=NULL;
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
    print();
    Reverse();
    cout<<endl<<"your list is "<<endl;
    print();
}
