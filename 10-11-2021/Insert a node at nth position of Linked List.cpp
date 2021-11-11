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
    temp->next=NULL;
    temp->data=x;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node *temp1= head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;


    }
}

void Insert1(int x, int pos)
{
    node *temp= new node();
    temp->next=NULL;
    temp->data=x;
    if(pos==1)
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        node* temp1= head;
        while(pos>2)
        {
            temp1=temp1->next;
            pos--;
        }
        temp->next=temp1->next;
        temp1->next=temp;


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
}

int main()
{
    head=NULL;
    Insert(3);
    Insert(5);
    Insert(8);
    Insert(10);
    //Insert(5);
    //Insert1(10,1);
    //Insert1(11,2);
    Insert1(11,5);

    Print();
}
