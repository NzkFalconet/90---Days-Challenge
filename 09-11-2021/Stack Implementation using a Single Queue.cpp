#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;

    for(int i=1;i<=5;++i)
    {
        q.push(i);
        for(int j=0;j<q.size()-1;++j)
        {

            q.push(q.front());
            q.pop();
        }
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
