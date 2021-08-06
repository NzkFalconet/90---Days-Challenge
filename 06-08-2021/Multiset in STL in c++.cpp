#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
{
    for(auto p:s)
    {
        cout<<p<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    multiset<string>s;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
  /*  auto it = s.find("abc");
   if(it!=s.end())
   {
       s.erase(it);
   }

  //  auto it= s.find("abc");
   if(it==s.end())
    {
        cout<<"abc not exist"<<endl;
    }
    else
    {
        cout<<"yes it exists"<<endl;
    } *?*/

    print(s);


}
