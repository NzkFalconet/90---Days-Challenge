#include<bits/stdc++.h>
using namespace std;

stack<int>input;
stack<int>output;

void push(int x)
{
    input.push(x);
}

void pop()
{
    if(!output.empty())
    {
        output.pop();
    }
    else
    {
        while(!input.empty())
        {
            output.push(input.top());
            input.pop();
        }
        output.pop();

    }

}

void front()
{
        if(!output.empty())
    {
        output.top();
    }
    else
    {
        while(!input.empty())
        {
            output.push(input.top());
            input.pop();
        }
        cout<<output.top();

    }
}


int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    front();
    pop();
    front();


}
