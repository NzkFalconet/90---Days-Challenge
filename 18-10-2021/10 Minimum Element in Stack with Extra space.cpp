#include<bits/stdc++.h>
using namespace std;
stack<int>s;
stack<int>ss;
int pop()
{
    if(s.empty())
    {
        return -1;
    }
    int ans = s.top();
    s.pop();
    if(ss.top()==ans)
    {
        ss.pop();
    }
    return ans;
}

void push(int a)
{
  s.push(a);
  if(ss.empty() || a<=ss.top())
  {
      ss.push(a);

  }
}

int getMin()
{
    if(ss.empty())
    {
        return -1;
    }
    else
    {
        return s.top();
    }
}
int getElem()
{
    if(ss.size()==0)
    {
        return -1;
    }
    return ss.top();
}
int main()
{
    vector<int>v;
    for(int i=0;i<6;++i)
    {
        int x;
        cin>>x;
        push(x);
       cout<< getElem()<<endl;
    }

}
