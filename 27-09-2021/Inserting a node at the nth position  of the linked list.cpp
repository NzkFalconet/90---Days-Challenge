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

void InsertAt(int x, int n)
{
    node *new_node = new node();
    new_node->data=x;
    node *temp = head;
    node *ptr;
    int count=1;
    if(n==2)//second position
    {
         ptr=temp->next;
         temp->next=new_node;
         new_node->next=ptr;
    }
    else
    {
         while(count<n-1)
    {
        temp=temp->next;
        ptr=temp->next;
        count++;

    }
      temp->next=new_node;
      new_node->next=ptr;
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
    cout<<endl;
    int n;
    cout<<"insert position where u want to store the element "<<endl;
    cin>>n;
    cout<<"insert the element ";
    int x;
    cin>>x;
    InsertAt(x,n);
     print();
}
