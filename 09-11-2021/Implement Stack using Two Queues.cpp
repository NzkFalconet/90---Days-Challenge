#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q1;
    queue<int>q2;


    for(int i=1;i<=5;++i)
    {
        q2.push(i);

        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q2,q1);
    }




    while(!q1.empty())
    {
        cout<<q1.front()<<endl;
        q1.pop();
    }
}
