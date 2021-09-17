#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s1;
    set<int>s2;
    vector<int>v1{1,2,2,1};
    vector<int>v2{2,2};
  for(auto x:v1)
  {
      s1.insert(x);
  }
   for(auto x:v2)
  {
      s2.insert(x);
  }
  vector<int>v;
   for(auto x:s2)
  {
    if(s1.count(x))
    {
        v.push_back(x);
    }
  }
  for(auto x:v)
  {
      cout<<x<<" ";
  }


}
