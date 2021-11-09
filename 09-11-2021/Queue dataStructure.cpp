#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    for(int i=1;i<5;++i)
    {
        q.push(i);
    }
    cout<<q.size()<<endl;
    if(!q.empty())
    {
        cout<<"Not empty"<<endl;
    }
    else
    {
        cout<<"Empty"<<endl;
    }


}
