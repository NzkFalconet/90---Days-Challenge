#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="(1+(2*3)+((8)/4))+1";
    stack<char>st;
    int count=0;
     for(int i=s.size()-1;i>=0;--i)
     {
         if(s[i]==40 || s[i]==41)
         {

             st.push(s[i]);
         }
         if(s[i]==41 && st.top()==40)
         {
             st.pop();
             count++;
         }
     }
   cout<<count;

}
