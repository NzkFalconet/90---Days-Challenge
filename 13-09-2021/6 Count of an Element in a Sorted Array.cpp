#include<bits/stdc++.h>
using namespace std;
int firstOccurrence(vector<int>&v,int target)
{

     int start=0;
    int end=v.size()-1;
    int mid;
     int res1=0;
       while(start<=end)
    {
        mid= start+(end-start)/2;

        if(v[mid]==target)
        {

            res1=mid;
            end=mid-1;
        }
          else if(v[mid]>target)
         {
             end=mid-1;
         }
         else if(v[mid]<target){
            start=mid+1;
         }
    }
     return res1;
}


int lastOccurrence(vector<int>&v,int target)
{

     int start=0;
    int end=v.size()-1;
    int mid;
     int res2=0;
       while(start<=end)
    {
        mid= start+(end-start)/2;

        if(v[mid]==target)
        {

            res2=mid;
            start=mid+1;
        }
          else if(v[mid]>target)
         {
             end=mid-1;
         }
         else if(v[mid]<target){
            start=mid+1;
         }
    }
    return res2;
}


int main()
{
    vector<int>v{2,4,20};
    int n=v.size();
    int target=10;


    int res1=firstOccurrence(v,target);
    int res2=lastOccurrence(v,target);

    if(res1==0 || res2==0)
    {
        cout<<-1;
    }
    else
    cout<<res2-res1+1;
}
