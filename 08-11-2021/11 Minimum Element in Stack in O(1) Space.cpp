#include<bits/stdc++.h>
using namespace std;

stack<int>s;
int min_elem;
void push(int val)
{
    if(s.empty())
    {
        s.push(val);
        min_elem=val;
    }
   else if(!s.empty() && val>min_elem)
   {
       s.push(val);
   }
   else if(!s.empty() && val<min_elem)
   {
       int x= 2*val-min_elem;
       min_elem=val;
       s.push(x);
   }
}

void pop()
{
    if(s.empty())
    {
        cout<<"stack is empty! No element to pop"<<endl;

    }
   else if(!s.empty() && s.top()>min_elem)
    {
        cout<<s.top()<<" is popped now!"<<endl;
        s.pop();
    }
    else if(!s.empty() && s.top()<min_elem)
    {

        cout<<min_elem<<" is popped now. minimum element is updated!";
        min_elem=2*min_elem-s.top();

        s.pop();

    }

}
void getMin()
{
    if(s.empty())
    {
        cout<<"stack is empty!"<<endl;
    }
    else
    {
         cout<<min_elem<<" is the minimum element"<<endl;
    }



}

int main()
{
    push(5);
    getMin();
    push(6);
    getMin();
    push(3);
    getMin();
    pop();
    getMin();
    pop();
    getMin();
    pop();
    getMin();
    pop();
}
