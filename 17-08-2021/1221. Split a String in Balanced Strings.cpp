#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="RLLLLRRRLR";
    string str="";
    if (s[0]=='R')
    {
         int count=0;
         int temp=0;
         int imp=0;
    for(int i=0;i<s.size();++i)
    {

        if(s[i]=='R')
        {
            count++;
            str=str+s[i];
        }

        else if(s[i]=='L')
        {
            temp++;
            str=str+s[i];

            if(temp=count)
            {
                imp++;
                count=0;
                cout<<str<<endl;
                str.clear();
            }

        }

    }
    //cout<<imp;
    }

}
