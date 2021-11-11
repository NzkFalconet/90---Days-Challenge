#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

node *head;

void Insert(int x)
{
    node *newNode= new node();
    newNode->next=NULL;
    newNode->prev=NULL;
    newNode->data=x;
    if(head==NULL)
    {
        head=newNode;

    }
    else
    {
        node *temp1= head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=newNode;
        newNode->prev=temp1;



    }
}

void Print()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

void PrintReverse()
{
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    while(temp!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<temp->data<<endl;
}

int main()
{
    head=NULL;
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    Print();
    PrintReverse();
}

