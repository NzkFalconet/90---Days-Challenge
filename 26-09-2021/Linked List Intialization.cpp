#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *link;
};

 node *head;
int main()
{

    head=NULL;
    node *temp= new node();
    temp->data=2;
    temp->link=NULL;
    head=temp;
    temp=new node();
    temp->data=4;
    temp->link=NULL;

    node *temp1 = head;
    while(temp->link!=NULL)
    {
        temp1=temp1->link;
    }
    temp1->link=temp;

    temp1= head;
    while(temp1->link!=NULL)
    {
        cout<<temp1->data<<endl;
        temp1=temp1->link;

    }

}
