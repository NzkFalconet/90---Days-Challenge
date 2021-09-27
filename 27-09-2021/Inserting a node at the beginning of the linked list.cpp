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

void print()
{
    node *temp1 = head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    cout<<endl;
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
