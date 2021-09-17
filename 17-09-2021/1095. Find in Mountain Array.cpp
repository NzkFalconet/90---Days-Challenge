#include<bits/stdc++.h>
using namespace std;

//-------------------------Simple Binary Search--------------------
 int BinarySearch(vector<int>& v,int start , int end, int target) {
         int n=v.size();

        int mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(v[mid]==target)
            {
                return mid;
            }
            else if(v[mid]<target)
            {
                start=start+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return -1;
    }
// ------------------------------Finding Max element/ Peak in array--------------------
        int peakIndexInMountainArray(vector<int>& v) {
        int  n=v.size();
        int start=0;
        int end=n-1;
        while(start<end)
        {
            int mid=start+(end-start)/2;
            if(v[mid]>v[mid+1])
            {
                end=mid;
            }
            else if
                (v[mid]<v[mid+1])
            {
                start=mid+1;
            }
        }
        return start;
    }

int main()
{
    vector<int>v{1,2,4,5,6,7,8,3,1};
    int end=v.size()-1;
    int target=3;

    int PeakElement=peakIndexInMountainArray(v);
    //cout<<PeakElement;
    int search1=BinarySearch(v,0,PeakElement,target);
    int search2=BinarySearch(v,PeakElement,end,target);
    if(search1!=-1)
    {
        cout<<search1;
    }
    else
    {
        cout<<search2;
    }

}
