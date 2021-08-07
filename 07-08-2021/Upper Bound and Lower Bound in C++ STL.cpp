#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);

    }
    sort(a.begin(),a.end());
    cout<<endl<<endl;
    for(auto it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<endl;
    }

   auto itr= lower_bound(a.begin(),a.end(),23);
   if(itr==a.end())
   {
       cout<<"Not Found"<<endl;
   }
   else
   {

       cout<<*itr<<endl;
   }


}
