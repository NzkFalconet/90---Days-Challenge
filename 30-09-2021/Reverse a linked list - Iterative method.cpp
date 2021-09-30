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

void Reverse()
{
    node *temp= head;
    node *prev,*link;
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

void Print()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}




int main()
{
    head=NULL;
    for(int i=1;i<=5;++i)
    {
        Insert(i);
    }
    Print();
    cout<<"after reverse "<<endl;
    Reverse();
    Print();

}
