#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        m[x]=y;


    }


    for(auto it1 = m.begin();it1!=m.end();++it1)
    {
        cout<<it1->first<<" "<<it1->second<<endl;
    }
    auto itr= m.upper_bound(4);
      if(itr==m.end())
   {
       cout<<"Not Found"<<endl;
   }
   else
   {

       cout<<(itr->first)<<" "<<(itr->second)<<endl;
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
