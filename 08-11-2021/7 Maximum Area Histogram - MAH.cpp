#include<bits/stdc++.h>
using namespace std;

vector<int>NSL(vector<int>&v)
{
    stack<pair<int,int>>s;
    vector<int>vec;
    for(int i=0;i<v.size();++i)
    {
       if(s.empty())
       {
           vec.push_back(-1);
       }
       if(!s.empty() && s.top().first<v[i])
       {
           vec.push_back(s.top().second);
       }
       if(!s.empty() && s.top().first>= v[i])
       {
           while(s.size()>0 && s.top().first>=v[i])
           {
               s.pop();
           }
           if(s.empty())
           {
               vec.push_back(-1);
           }
           else
           {
               vec.push_back(s.top().second);
           }
       }
       s.push({v[i],i});
    }
    return vec;

}

vector<int>NSR(vector<int>&v)
{
    stack<pair<int,int>>s;
    vector<int>vec;
    for(int i=v.size()-1;i>=0;--i)
    {
       if(s.empty())
       {
           vec.push_back(-1);
       }
       if(!s.empty() && s.top().first<v[i])
       {
           vec.push_back(s.top().second);
       }
       if(!s.empty() && s.top().first>=v[i])
       {
           while(s.size()>0 && s.top().first>=v[i])
           {
               s.pop();
           }
           if(s.empty())
           {
               vec.push_back(-1);
           }
           else
           {
               vec.push_back(s.top().second);
           }
       }
       s.push({v[i],i});
    }
    reverse(vec.begin(),vec.end());
    return vec;
}


int main()
{
    vector<int>v{6,2,5,4,5,1,6};
    vector<int>v1=NSL(v);
    vector<int>v2=NSR(v);
   for(int i=0;i<v.size();++i)
   {
       v[i]=(v2[i]-v1[i]-1)*v[i];
   }

   int max= *max_element(v.begin(),v.end());
   cout<<max;
}
