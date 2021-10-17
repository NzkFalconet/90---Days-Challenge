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

 int MAH(vector<int>&v)
{
    return Area(v);
}

void MAR(vector<vector<int>>&v)
{
     vector<int>temp;
    vector<int>res;



    for(int j=0;j<v.size();++j)
    {
        res.push_back(v[0][j]);
    }
    int max_elem= MAH(res);
    for(int i=1;i<v.size();++i)
    {

        for(int j=0;j<v[i].size();++j)
        {

            if(v[i][j]!=0)
            {
               res[j]=res[j]+v[i][j];

            }
            else
            {
                 res[j]=0;

            }


        }

        max_elem= max(max_elem,MAH(res));


    }
        cout<<max_elem;





}


int main()
{
    vector<vector<int>>v{
                        {0,1,1,0},
                        {1,1,1,1},
                        {1,1,1,1},
                        {1,1,0,0}
                        };

    MAR(v);

}
