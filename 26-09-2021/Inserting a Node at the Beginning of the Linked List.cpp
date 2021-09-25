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
    node *temp = new node();
        temp->data=x;

       temp->next=head;
       head=temp;




}
ff
void Print()
{
    node *temp= head;
    cout<<"your list is ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{
    head=NULL;
    cout<<"size of the linked list\n";
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;++i)
    {
        cin>>x;
        Insert(x);
        Print();
    }
}
