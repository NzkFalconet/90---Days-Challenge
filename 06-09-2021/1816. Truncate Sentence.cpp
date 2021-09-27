#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="chopper is not a tanuki";
    int count=0;
    string str;
    int k=5;
    k=k-1;
   for(auto i=0;i<=s.size();++i)
   {
        if(!isspace(s[i]) && count<=k)
       {
           str.push_back(s[i]);

       }
       if(isspace(s[i]))
       {
           count++;
           str.push_back(s[i]);
       }
   }
   int sz=str.size();

    if(str[sz-2]==' ')
    {
       str.pop_back();
       cout<<str;
    }
    else
    {
        cout<<str;
    }
}
