#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{3,4,0,1,2};
    int n= v.size();
    int start=0;
    int end=n-1;
    while(start<end)
    {
        if(v[start]<v[end])
        {
            cout<<n-start;
            return 1;
        }
        int mid=start+ (end-start)/2;
        if(v[mid]>=v[start])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    cout<<n-start;
}
