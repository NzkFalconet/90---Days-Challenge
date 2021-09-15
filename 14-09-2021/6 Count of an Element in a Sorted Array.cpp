#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&v,int start, int end ,int target)
{


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

int main()
{
       vector<int>v{2,3,4,5,10,10,10,10,11};
    int n=v.size();
    int start=0,end=n-1,mid;
    int first=0;
    int last=0;
    int target=10;
    int res=0;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(v[mid]==target)
        {
            res=mid;
            first=binarySearch(v,0,mid-1,target);
            last=binarySearch(v,mid+1,n-1,target);
            cout<<last<<" "<<first;

            return 1;
        }
        else if(v[mid]>target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
}
