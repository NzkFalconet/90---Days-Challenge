#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &v , int start , int end, int target)
{
     while(start<=end)
    {
       int mid=start+(end-start)/2;
        if(v[mid]==target)
           {

            return mid;
           }

        else if(v[mid]<target)
        {
            start=mid+1;
        }
        else if(v[mid]>target)
        {
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    vector<int> v{1,2,3,4,5,6,8,9,10,11,12};
    int start=0;
    int end=1;
    int key=10;

    while(key>v[end])
    {
         start=end;
        end=end*2;

    }
    //cout<<start<<" "<<end;
   cout<<binarySearch(v,start,end,key);

}
