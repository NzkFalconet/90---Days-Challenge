#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="G()(al)";
    int count=0;

    vector<char>sval;
   for(int i=0;i<s.size();++i)
   {
       char a=s[i];
       char b=s[i+1];
      // string st1=s[i];
       if(a=='(' &&  b==')')
       {
         sval.push_back('o');
       }
       else if(a=='G')
       {
           sval.push_back('G');
       }
       else if(a=='a')
       {
            sval.push_back('a');
             sval.push_back('l');

       }
   }
string str(sval.begin(),sval.end());
   for(auto val:sval)
   {
       cout<<val;
   }
}

