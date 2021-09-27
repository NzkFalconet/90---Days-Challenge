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
    node *temp=new node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    {
        temp->next=head;
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
void print()
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void Delete(int n)
{
    node *temp1=head;
    if(n==1)
    {
        head=temp1->next;
        free(temp1);
        return ;
    }

    for(int i=0;i<n-2;++i)
    {
        temp1=temp1->next;


    }
    node *temp2=temp1->next;
        temp1->next=temp2->next;
        free(temp2);
}
void free(node *temp)
{
    delete temp;
}

int main()
{
    head=NULL;
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    print();
    cout<<endl<<"enter valid position between "<<1<<" to "<<4<<endl;
    int x;
    cin>>x;
    Delete(x);
    print();

}
