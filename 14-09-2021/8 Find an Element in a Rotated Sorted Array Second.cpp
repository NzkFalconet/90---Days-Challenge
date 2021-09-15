#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &v , int start, int end,int target)
{
    while(start<=end)
    {

        int mid=start+(end-start)/2;
        if(v[mid]==target)
        {

            return mid;
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
    return -1;
}
int main()
{
    //vector<int>v{11,12,15,18,2,5,6,8};
    vector<int>v{4,5,1,2};
    int n=v.size();
    int start=0,end=n-1,mid;
    int target=0;
    while(start<end)
    {
        if(v[start]<v[end])
        {
            if(v[start]==target)
            {
                cout<<"element found at index "<<start;
            }
            else if(v[start]<target)
            {
                end=start-1;
                start=0;
                cout<<"element found at "<<binarySearch(v,start,end,target);


            }
            else if(v[start]>target)
            {
                start=start+1;
                end=n-1;
                cout<<"element found at "<<binarySearch(v,start,end,target);

            }
            else
            {
                cout<<"element not found ";
            }
            return 1;


        }
        mid=start+(end-start)/2;
        if(v[mid]>v[start])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    cout<<v[start];
    cout<<" condition-2";

}
