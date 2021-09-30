

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

void Print()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int count()
{
    node *temp=head;
    int count1=0;
    while(temp!=NULL)
    {
        count1++;
        temp=temp->next;
    }
    return count1;
}

void Delete(int mid)
{
    node *temp=head;
    for(int i=1;i<mid;++i)
    {
        temp=head;
        head=temp->next;
        delete temp;
    }
}



int main()
{
    head=NULL;
    for(int i=1;i<=4;++i)
    {
        Insert(i);
    }
    Print();
    int loc=count();

    int mid;
    if(loc&1)
    {
        mid=(loc+1)/2;
    }
    else
    {
        mid=loc/2+1;
    }
    cout<<endl;
    cout<<mid<<endl;
    Delete(mid);
    Print();
}
