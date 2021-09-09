#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string s= "thequickbrownfoxjumpsoverthelazydog";
    for(int i=97;i<123;++i)
    {
       char c=i;
       if(s.find(c) != std::string::npos)
       {
           count=0;
       }
       else
       {
           count=-1;
           break;
       }
    }
    if(count==-1)
    {
        cout<<"false";
    }
    else{cout<<"true";}
}
