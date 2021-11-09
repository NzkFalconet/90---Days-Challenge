#include<bits/stdc++.h>
using namespace std;

#define N 5
int a[N];
int cnt=0;
int front=0;
int rear=0;

void push(int x)
{
  if(cnt==N)
  {
      cout<<" queue is full can't insert "<<endl;
  }
  else
  {
      a[rear%N]=x;
      cnt++;
      rear++;
      cout<<x<<" inserted into queue"<<endl;
  }
}

void pop()
{

    if(cnt==0)
    {
        cout<<"No element to pop "<<endl;
    }
    else
    {
        cout<<a[front%N]<<" element is popped off"<<endl;
        a[front%N]=-1;
        front++;
        cnt--;

    }
}

void top()
{
    if(cnt==0)
    {
        cout<<"No element in queue"<<endl;
    }else
    {
        cout<<a[front%N]<<" is the peak element"<<endl;
    }
}




int main()
{
    push(2);
    push(5);
    push(-1);

    top();
    pop();
    top();

}
