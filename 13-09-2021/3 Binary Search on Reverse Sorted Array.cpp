
#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int>v{17,14,13,12,11,10,9,5,4};
     int target =4;
     int start=0;
     int end=v.size()-1;
     int mid;
     while(start<=end)
     {
         mid=start+ (end-mid)/2;
         if(v[mid]==target)N
              cout<<target<<" found at "<<mid<<endl;
             return 1;
         }
         else if(v[mid]>target)
         {
             start=mid+1;
         }
         else if(v[mid]<target){
            end=mid-1;
         }
     }
    return -1;
}
