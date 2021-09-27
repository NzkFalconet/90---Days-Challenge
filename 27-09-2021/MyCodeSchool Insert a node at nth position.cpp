#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head;

void Insert(int x, int n)
{
    node *temp=new node();
    temp->data=x;
    temp->next=NULL;
    if(n==1)
    {
        temp->next=head;
        head=temp;
        return;
    }
    node *temp2=head;
    for(int i=0;i<n-2;++i)
    {
        temp2=temp2->next;
    }
    temp->next= temp2->next;
    temp2->next=temp;



}
void print()
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



int main()
{
    head=NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    print();
}
