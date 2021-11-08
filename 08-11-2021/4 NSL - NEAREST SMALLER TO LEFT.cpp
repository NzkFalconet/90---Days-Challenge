#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    vector<int>v{1,3,0,0,1,2,4};
    vector<int>vec;
    for(int i=0;i<v.size();++i)
    {
       if(s.empty())
       {
           vec.push_back(-1);
       }
       if(!s.empty() && s.top()<v[i])
       {
           vec.push_back(s.top());
       }
       if(!s.empty() && s.top()>= v[i])
       {
           while(s.size()>0 && s.top()>=v[i])
           {
               s.pop();
           }
           if(s.empty())
           {
               vec.push_back(-1);
           }
           else
           {
               vec.push_back(s.top());
           }
       }
       s.push(v[i]);
    }


    for(auto it:vec)
    {
        cout<<it<<" ";
    }
}
