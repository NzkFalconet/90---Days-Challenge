#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node* next;

};

node* head;


void Insert(int x)
{
    node* temp=new node();
    temp->val=x;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return;

    }
    node *temp1=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }

    temp1->next=temp;

}



void Print()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }

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
}
