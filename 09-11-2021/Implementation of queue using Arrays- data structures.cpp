#include<bits/stdc++.h>
using namespace std;

#define N 5

int queue1[N];
int front= -1;
int rear= -1;

void enqueue(int x)
{
    if(front==N-1)
    {
        cout<<"Overflow Condition "<<endl;
    }
    else if(front==-1 && rear == -1)
    {
        front=rear=0;
        queue1[rear]=x;
    }
    else
    {
        rear++;
        queue1[rear]=x;

    }

}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        cout<<"No element in queue "<<endl;
    }
    else if(front==rear)
    {
         cout<<queue1[rear];
        front=rear=-1;


    }
    else
    {
        front++;
    }
}

void display()
{
    if(front==-1 && rear == -1)
    {
        cout<<"No elements to display because queue is empty "<<endl;
    }
    int i;
    for(i=front;i<=rear;++i)
    {
        cout<<queue1[i]<<" ";
    }
    cout<<endl;

}

void peek()
{
     if(front==-1 && rear == -1)
    {
        cout<<"No element to display because queue is empty "<<endl;
    }
    else
    {
        cout<<queue1[front]<<endl;
    }
}



int main()
{
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    peek();
    dequeue();
    peek();
    display();

}
