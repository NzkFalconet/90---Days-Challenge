#include<bits/stdc++.h>
using namespace std;
stack<int>s;
stack<int>ss;


void push(int a)
{
   s.push(a);
   if(ss.empty() || ss.top()>=a)
   {
       ss.push(a);
   }

}

int getElem()
{
    if(ss.empty())
    {
        return -1;
    }

        return ss.top();


}

int pop()
{
    if(s.empty())
    {
        return -1;
    }
    int ans = s.top();
    s.pop();
    if(ans==ss.top())
    {
        ss.pop();
    }
    return ans;
}

int main()
{
    for(int i=0;i<6;++i)
    {
        int x;
        cin>>x;
        push(x);
       cout<< getElem()<<endl;
    }
}
