#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,3,2,4,5};
    stack<int>s;
    vector<int>vec;
    for(int i=v.size()-1;i>=0;--i)
    {
        if(s.empty())
        {
            vec.push_back(-1);
        }
        if(!s.empty() && v[i]<s.top())
        {
            vec.push_back(s.top());

        }
        if(!s.empty() && v[i]>=s.top())
        {

            while(s.empty() || v[i]>=s.top())
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
    reverse(vec.begin(),vec.end());
    for(auto it:vec)
    {
        cout<<it<<" ";
    }
}
