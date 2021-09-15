#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{2,3,4,5,10,10,10,10,11};
    int n=v.size();
    int start=0,end=n-1,mid;
    int res=-1;
    int target=10;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(v[mid]==target)
        {
            res=mid;
          //for last occurrence uncomment this->  start=mid+1;
          //for first occurrence uncomment this->  end=mid-1;
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
    if(res==-1)
    {
        cout<<-1<<endl;
        return 1;
    }
    cout<<res;

}
