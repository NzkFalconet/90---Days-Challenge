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

void Delete(int pos)
{
    node *temp=head;
    if(pos==1)
    {
        head=head->next;
        delete temp;
        return ;
    }
    for(int i=0;i<pos-2;++i)
    {
        temp=temp->next;
    }
    node *temp1;
    temp1=temp->next;
    temp->next=temp1->next;
    delete temp1;

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
    for(int i=5;i<10;++i)
    {
        Insert(i);
    }
    Print();
    cout<<endl;
    int x;
    cin>>x;
    Delete(x);
    Print();
}
