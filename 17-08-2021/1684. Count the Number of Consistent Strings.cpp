#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<string> words={"cc","acd","b","ba","bac","bad","ac","d"};
   string str="ab";
  int count =0;
  int temp=0;
   for(int i=0;i<words.size();++i)
   {
      string sus= words[i];

      for(int j=0;j<sus.size();++j)
      {
          char ch =sus[i];

          if(str.find(ch)<sus.size())
          {
              count++;

          }
          else
          {
              count=0;


          }
           cout<<count<<" ";

      }

      if(count!=0)
      {
          temp++;
          cout<<"temp gets called at "<<sus<<endl;
      }


   }
   cout<<temp;


}
