#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str= "abbaca";

      stack<int>s;

        for(int i=str.size();i>=0;--i)
        {
            if(s.empty() || s.top()!=str[i])
            {
                s.push(str[i]);
            }
            else if(s.top()==str[i])
            {
                s.pop();
            }
        }
         string res;
        for(int i=0;i<s.size();++i)
        {
            res.push_back(s.top());
            s.pop();
        }
       cout<<res;

}
