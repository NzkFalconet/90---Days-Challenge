#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head;
node *head2;
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

void Insert1(int x)
{
    node *temp= new node();
    temp->data=x;
    temp->next=NULL;
    if(head2==NULL)
    {
        temp->next=NULL;
        head2=temp;
        return ;
    }
    node *ptr=head2;
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
void Print1()
{
    node *temp=head2;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    head=NULL;
    head2=NULL;
    for(int i=0;i<=5;++i)
    {
        Insert(i);
    }


        Insert1(1000000);
        Insert1(1000001);
        Insert1(1000002);

    Print();
    cout<<endl;

     Print1();
    cout<<endl;
    Delete(head,head2,3,4);

     Print();

}
