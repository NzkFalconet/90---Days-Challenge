#include<bits/stdc++.h>
using namespace std;

vector<int> NSL(vector<int>&v)
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
       if(!s.empty() && s.top().first>=v[i])
       {

           while(!s.empty() && s.top().first>=v[i])
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

vector<int> NSR(vector<int>&v)
{
    stack<pair<int,int>>s;
    vector<int>vec;
   for(int i=v.size()-1;i>=0;--i)
   {
       if(s.empty())
       {
           vec.push_back(v.size());
       }
       if(!s.empty() && s.top().first<v[i])
       {

           vec.push_back(s.top().second);
       }
       if(!s.empty() && s.top().first>=v[i])
       {

           while(!s.empty() && s.top().first>=v[i])
           {
               s.pop();
           }
           if(s.empty())
           {
               vec.push_back(v.size());
           }
           else
           {
               vec.push_back(s.top().second);
           }
       }
       s.push({v[i],i});
   }
   reverse(vec.begin(), vec.end());
   return vec;
}

int Area(vector<int>&v)
{
   vector<int>v1= NSL(v);
   vector<int>v2= NSR(v);

   vector<int>res;
   int width;
   int area;
   for(int i=0;i<v.size();++i)
   {
       width= (v2[i]-v1[i]-1);
       area= width*v[i];
       res.push_back(area);
   }
  int Max_Area= *max_element(res.begin(),res.end());
  return Max_Area;
}

void MAH(vector<int>&v)
{
    cout<<Area(v);
}

int main()
{
    vector<int>v{6,2,5,4,5,1,6};
    MAH(v);

}
