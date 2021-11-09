#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s1;
    stack<int>s2;

    for(int i=1;i<6;++i)
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(i);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }

    }

    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }



}
