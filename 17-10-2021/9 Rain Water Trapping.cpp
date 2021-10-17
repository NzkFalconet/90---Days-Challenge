#include<bits/stdc++.h>
using namespace std;


int main()
{
   // vector<int>v{3,0,0,2,0,4};
     vector<int>v{0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int>maxL=v;
   vector<int>maxR=v;
    maxR[v.size()-1]= v[v.size()-1];
   for(int i=1;i<v.size();++i)
   {
       maxL[i]=max(maxL[i-1],v[i]);

   }
     for(int i=v.size()-2;i>0;--i)
   {
       maxR[i]=max(maxR[i+1],v[i]);

   }
    vector<int>res;
    for(int i=0;i<v.size();++i)
    {
        int rel=min(maxL[i],maxR[i])-v[i];
        res.push_back(rel);
    }
    for(auto it:res)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<accumulate(res.begin(),res.end(),0);



}
