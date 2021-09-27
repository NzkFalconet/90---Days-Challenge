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
    node *temp1= new node();
    temp1->data=x;
    temp1->next=NULL;
    if(n==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    node *temp2= head;
    for(int i=0;i<n-2;++i)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2;
    temp2->next=temp1;


}

void print()
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}



int main()
{
    head=NULL;
    int n;
    cout<<"how many numbers u want to enter "<<endl;
    cin>>n;

    for(int i=0;i<n;++i)
    {
        cout<<endl;
        int x;
         cout<<"enter your numbers "<<endl;
        cin>>x;
        int n;
        cout<<"enter the position where u want to enter ";
        cin>>n;
        Insert(x,n);
        print();
    }

}
