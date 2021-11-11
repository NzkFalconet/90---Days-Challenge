#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="(u(love)i)";
    stack<int>st;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='(')
        {
            st.push(i);
        }
        else if(s[i]==')')
        {
            int y=st.top();
            st.pop();
            int x=i;
            reverse(s.begin()+y,s.begin()+x);

        }

    }
    string s2;
    for(auto it:s)
    {
        if(it!='(' && it != ')')
        {
            s2.push_back(it);
        }
    }

    cout<<s2;
}
