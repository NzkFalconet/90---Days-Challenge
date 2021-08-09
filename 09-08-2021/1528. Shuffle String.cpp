#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    string s="codeleet";
    vector<int> v={4,5,6,7,0,2,1,3};
    for(int i=0;i<s.size();i++)
        {
            m[v[i]]=s[i];
        }
        vector<string>val;

          for(auto i=m.begin();i!=m.end();++i)
        {
            string x= i->second;
            val.push_back(x);
        }
         for(auto it:val)
        {
            cout<<it;
        }
}




/*
    map<int,string>m;
    string s="shaan";
    vector<int> v={2,10,4,5,1};
    for(int i=0;i<s.size();i++)
        {
            m[v[i]]=s[i];
        }
        vector<string>val;

          for(auto i=m.begin();i!=m.end();++i)
        {
            string x= i->second;
            val.push_back(x);
        }
         for(auto it:val)
        {
            cout<<it;
        }*/
