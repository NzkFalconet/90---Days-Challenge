#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{5,10,30,20,40};
    int n=v.size();
    int end=n-1;
    int start=0;
    int mid;
    int target=40;


        while(start<=end)
    {
        mid=start+(end-start)/2;
        if(target==v[mid])
            {return mid;}
        if(mid-1>=start && v[mid-1]==target)
            {return mid-1;}
        if(mid+1<=end && v[mid+1]==target)
            {return mid+1;}
        if(target<v[mid])
            {end=mid-2;}
        if(target>v[mid])
            {start=mid+2;}

    }
    return -1;
}
