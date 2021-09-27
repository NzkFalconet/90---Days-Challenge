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

        head=temp;

    }
    else
    {

         node *temp1= head;
        while(temp1->next!= NULL)
        {
            temp1=temp1->next;

        }
         temp1->next=temp;

    }

}

void print()
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
    for(int i=0;i<5;++i)
    {
        int x;
        cin>>x;
        Insert(x);
        print();
    }
}
