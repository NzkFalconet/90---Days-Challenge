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
    if(head==NULL)
    {
        temp->next=NULL;
        head=temp;
    }
    temp->next=NULL;
    node *temp1=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;


}

void Print()
{
    node *temp=head;

   // cout<<"your list is "<<endl;
    while(temp!=NULL)
    {
         cout<<temp->data;
        temp=temp->next;

    }

}



int main()
{
    head=NULL;
    cout<<"how many numbers\n";
    int n,x;
    cin>>n;
      cout<<"enter numbers"<<endl;
    for(int i=0;i<n;++i)
    {

        cin>>x;
        Insert(x);
        Print();

    }



}
