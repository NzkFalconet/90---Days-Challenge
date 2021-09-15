#include<bits/stdc++.h>
using namespace std;

int minimumElement(vector<int> &v,int start, int end)
{
     int n=v.size();
    int mid;
    if(v[0]<v[n-1])
    {
        return v[0];


    }

    while(start<=end)
    {
        int mid=start+(end-start)/2;
        int prev=(mid+n-1)%n;
        int next=(mid+1)%n;
        if(v[mid]<v[prev] && v[mid]<v[next])
        {
            return mid;

        }
        if(v[mid]>v[start])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}

int binarySearch(vector<int> &v , int start , int end , int target)
{
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


int main()
{
    vector<int>v{4,5,-6,-5,-1,0,2};
      int n=v.size();
      int target=0;
    int start=0,mid,end=n-1;
    int min= minimumElement(v,0,n-1);
    if(target==v[min])
    {
        cout<<target;
    }
    else if(target>v[min] && target<v[n-1])
    {
        start=min+1;
        cout<<binarySearch(v,min+1,n-1,target);
    }
    else
    {
         cout<<binarySearch(v,0,min-1,target);
    }
   return -1;
}
