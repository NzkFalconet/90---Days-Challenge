#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);

    }


    for(auto val:s)
    {
        cout<<val<<endl;
    }
    auto itr= s.lower_bound(26);
      if(itr==s.end())
   {
       cout<<"Not Found"<<endl;
   }
   else
   {

       cout<<*itr<<endl;
   }

  /* auto itr= lower_bound(a.begin(),a.end(),23);
   if(itr==a.end())
   {
       cout<<"Not Found"<<endl;
   }
   else
   {

       cout<<*itr<<endl;
   }

*/
}
