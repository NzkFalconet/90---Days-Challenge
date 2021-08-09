#include<bits/stdc++.h>
using namespace std;
int main()
{
      vector<int> v={2,10,4,5,1};
    string s="codeleet";
    string str=s;
    for(int i=0;i<s.size();++i)
    {
        str[v[i]]=s[i];
    }
      for(int i=0;i<s.size();++i)
    {
        cout<<str[i];
    }
}
