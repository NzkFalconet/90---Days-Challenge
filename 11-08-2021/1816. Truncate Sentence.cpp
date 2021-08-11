#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello my name is shaan!";
   int len=0;
   int k=2;
   int count=0;
   for(int i=0;i<s.size();++i)
   {
       len++;
       if(isspace(s[i]))
       {
           count++;
       }
       if(count>k)
       {
          break;
       }

   }
   cout<<len;
}
