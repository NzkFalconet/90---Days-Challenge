#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<pair<int,int>>s;
    vector<int>v{100,80,60,70,60,75,85};
    vector<int>vec;

    for(int i=0;i<v.size();++i)
    {

        if(s.empty())
        {
            vec.push_back(-1);
        }
        if(!s.empty() && s.top().first>v[i])
        {
            vec.push_back(s.top().second);
        }
        if(!s.empty() && s.top().first<=v[i])
        {
            while(!s.empty() && s.top().first<=v[i])
            {

                s.pop();

            }
            if(s.empty())
            {
                vec.push_back(-1);
            }
            else
            {
              vec.push_back(s.top().second);
            }



        }

        s.push({v[i],i});
    }

  for(int i=0;i<v.size();++i)
  {
      vec[i]= i-vec[i];
  }
  for(auto it:vec)
  {
      cout<<it<<" ";
  }
}
