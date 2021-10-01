#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* prev;
    node* next;
};

node *head;


node* CreateNode(int x)
{
    node* newNode= new node();
    newNode->data=x;
    newNode->prev=NULL;
    newNode->next=NULL;
    return newNode;

}

void InsertAtHead(int x)
{
    node* newNode=CreateNode(x);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;

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

void PrintReverse()
{
    node *temp=head;
    if(temp==NULL)
    {
        return; //empty list
    }

    while(temp->next!=NULL)
    {
        temp=temp->next; //traversing the whole list to come to end
    }

    while(temp!=NULL)
    {

        cout<<temp->data<<" ";
        temp=temp->prev;
    }


}






int main()
{
    head=NULL;
    InsertAtHead(2);
    InsertAtHead(6);
    InsertAtHead(4);
    Print();
    cout<<endl;
    PrintReverse();
}
