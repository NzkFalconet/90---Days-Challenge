#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{2,4,10,10,10,10,20};
    int n=v.size();
    int start=0;
    int end=n-1;
    int mid;
    int target=10;
     int res=-1;
    while(start<=end)
    {
        mid= start+(end-start)/2;

        if(v[mid]==target)
        {
            res=mid;
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
    cout<<res;
}
