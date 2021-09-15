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
    vector<int>v{11,12,15,18,5,6,8};
    int n=v.size();
    int target=0;
    int start=0,end=n-1,mid;
    while(start<end)
    {
        if(v[start]<v[end])
        {

           int res1= binarySearch(v,0,mid,target);
            int res2= binarySearch(v,start,n-1,target);
            if(res1==-1 && res2==-1)
            {
                cout<<"not found";
            }
            else if(res1!=-1)
            {
                cout<<"found at "<<res1;
            }
            else
            {
                cout<<"found at "<<res2;
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
           int res1= binarySearch(v,0,mid,target);
            int res2= binarySearch(v,start,n-1,target);
            if(res1==-1 && res2==-1)
            {
                cout<<"not found";
            }
            else if(res1!=-1)
            {
                cout<<"found at "<<res1;
            }
            else
            {
                cout<<"found at "<<res2;
            }

}
