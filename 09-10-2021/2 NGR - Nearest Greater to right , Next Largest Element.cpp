#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,3,2,4};
    vector<int>vec;
    stack<int>s;
    for(int i=v.size()-1;i>=0;--i)
    {


            if(s.size()==0)
            {
                vec.push_back(-1);


            }
            if(s.size()>0 && v[i]<s.top())
            {
                vec.push_back(s.top());
            }

            if(s.size()>0 && v[i]>=s.top())
            {
                while(s.size()>0 && s.top()<=v[i])
                {
                    s.pop();
                }
                if(s.size()==0)
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


