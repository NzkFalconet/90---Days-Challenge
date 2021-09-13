#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4,5,6,7,8};
    int start=0;
    int end=v.size()-1;
    int mid;
    int target=4;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(v[mid]==target)
           {
               cout<<target<<" found at "<<mid<<endl;
            return 1;
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
