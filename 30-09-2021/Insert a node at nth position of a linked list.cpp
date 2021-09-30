#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head;

void Insert(int x,int pos)
{
    node *temp= new node();
    temp->data=x;
    temp->next=NULL;

    if(pos==1)
    {
        temp->next=head;
        head=temp;
        return ;
    }

    node *temp1=head;
    for(int i=0;i<pos-2;++i)
    {
        temp1=temp1->next;
    }
     temp->next=temp1->next;
    temp1->next=temp;



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
   Insert(3,1);
   Insert(4,2);
   Insert(5,1);
   Insert(2,2);
    Print();
}
