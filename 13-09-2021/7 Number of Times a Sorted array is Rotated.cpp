#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &v)
{
     int start=0;
    int end=v.size()-1;
    int mid;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(v[mid]<v[mid-1] && v[mid]<v[mid+1])
           {
               return mid;
           }

        else if(v[mid]>v[mid+1])
        {

            end=mid-1;
        }
        else if(v[mid]>v[mid+1])
        {
           start=mid+1;
        }
    }
    return -1;
}

int main()
{
    vector<int> v{5,6,8,11,12,15,18,2};
    cout<<binarySearch(v);
}
