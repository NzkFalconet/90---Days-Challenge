#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{4,5,-5,1,2};

    int n=v.size();
    int start=0,mid,end=n-1;
    if(v[0]<v[n-1])
    {
        cout<<v[0];
        return 1;

    }

    while(start<=end)
    {
        int mid=start+(end-start)/2;
        int prev=(mid+n-1)%n;
        int next=(mid+1)%n;
        if(v[mid]<v[prev] && v[mid]<v[next])
        {
            cout<<v[mid];
            return 1;
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
}
