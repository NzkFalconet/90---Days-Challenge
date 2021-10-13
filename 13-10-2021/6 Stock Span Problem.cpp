#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{10,80,60,50,75,85};
    stack<int>s;
    vector<int>vec;
    vec.push_back(1);
    for(int i=1;i<v.size();++i)
    {
        int count=1;
        for(int j=0;j<i;++j)
        {
            s.push(v[j]);
        }

        if(!s.empty() && v[i]<s.top())
        {
            vec.push_back(1);

        }
        if(!s.empty() && v[i]>=s.top())
        {
            while(!s.empty() || v[i]>=s.top())
            {
               count++;
               s.pop();
            }

                vec.push_back(count);



        }
      for(int i=0;i<s.size();++i)
      {
          s.pop();
      }
    }

    for(auto it:vec)
    {
        cout<<it<<" ";
    }
}
