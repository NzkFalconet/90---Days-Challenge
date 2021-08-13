#include<bits/stdc++.h>
using namespace std;
int checkR(string s)
{
     int count1=0,count2=0,count3=0;
      for(int i=0;i<s.size();++i)
    {
        if(s[i]=='R')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count1==count2)
    {
        return count1;
    }
    else
    {
        return count3;
    }

}
int main()
{
    string s="RLRRLLRLRL";


    cout<<checkR(s)<<endl;

}
