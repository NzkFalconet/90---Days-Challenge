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
    temp->next=head;
    head=temp;
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
}
