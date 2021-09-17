#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1, 2, 8, 10, 10, 12, 19};
    int target=9;
    int start=0;
    int end=v.size()-1;
    int mid;
    int res;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(v[mid]==target)
        {
            cout<<mid;
            return 1;


        }
          if(v[mid]<target)
        {
            res=v[mid];
            start=mid+1;
        }
       else if(v[mid]>target)
        {
            end=mid-1;
        }

    }
    cout<<res<<"b";
    return 1;
}
