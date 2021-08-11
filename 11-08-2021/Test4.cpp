#include<bits/stdc++.h>
using namespace std;
int main()
{
  //  vector<string>v="hello";
   vector<string>v={".-","-...","-.-."};
   vector<string>str={"gin","zen","gig","msg"};
   vector<vector<string>>s;
   vector<string>temp;
  //char ch='c';
  //  int val =(int) ch;
 //   cout<<val-97;
    for(int i=0;i<str.size();++i)
    {
         string sav={};
        for(int j=0;j<str[i].size();++j){
                char ch1= str[i][j];
                int val1 = (int) ch1-97;
                string sav=v[val1]+sav;


        }

    }

        s.push_back(temp);

   for(int i=0;i<s.size();++i)
    {
        for(int j=0;j<s[i].size();++j)
        {
            cout<<s[i][j]<<" ";

        }

        cout<<endl;
    }
}
