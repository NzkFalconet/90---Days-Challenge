#include<bits/stdc++.h>
using namespace std;

stack<int>s;
stack<int>ss;

void show();

void push(int x)
{
    s.push(x);

    if(ss.empty() || ss.top()>=x)
    {
        ss.push(x);
    }


}

int pop()
{

    if(s.empty())
    {
        return -1;
    }

    int x=s.top();
    s.pop();

    if(x==ss.top())
    {
        ss.pop();
    }
    return x;
}

int getMin()
{
    if(ss.empty())
    {
        return -1;
    }
   return ss.top();
}

int main()
{
    vector<int>v{18,19,29,15,16};
    push(v[0]);
    push(v[1]);
    push(v[2]);
    getMin();

    push(v[4]);

    pop();
    getMin();


}
