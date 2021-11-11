#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

node *dummy= new node();
node * head=dummy;
node* mid= dummy;
int cnt=0;





void Push(int x)
{
  node* newNode = new node();
  newNode->data=x;
  newNode->next= head;
  newNode->prev=NULL;
  cnt++;
  head->prev= newNode;
  head=newNode;
  if(cnt%2!=0)
  {
      mid= newNode;
  }
  else if(cnt%2==0)
  {
      mid=mid->prev;
  }
}

int pop()
{
    if(cnt==0)
    {
         cout<<"No element to pop "<<endl;
         return -1;
    }
    node *temp= head;
    int x=temp->data;
    head=head->next;
    if(head!=NULL)
    {
        head->prev= NULL;
        cnt--;
    }
    if(cnt&1)
    {
        mid=mid->next;

    }
  return x;


}

void Print()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

int Middle()
{
    if(cnt==0)
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    return mid->data;
}

int main()
{
    head=NULL;
    Push(1);
    Push(2);
    Push(3);
    Push(4);
    Push(5);
    Print();
    cout<<endl<<"The Middle element is "<<Middle()<<endl;
    pop();
    Print();
    cout<<endl<<"The Middle element is "<<Middle()<<endl;
    pop();
    Print();
    cout<<endl<<"The Middle element is "<<Middle()<<endl;




}

