#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&v, int start , int end , int target)
{

     while(start<=end)
        {
           int mid=start+(end-start)/2;
            if(v[mid]==target)
            {
                return 0;
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
        return end;
}


int main()
{
    vector<int>v{1,3,5,10,15};
    int n=v.size();
    int start=0;
    int end=n-1;
    int target=18;
    int loc=binarySearch(v,0,n-1,target);

    if(loc==0)
    {
        cout<<"minimum difference is 0"<<endl;
    }
    else
    {
        cout<<loc<<endl;
        int temp1=abs(target-v[loc+1]);
       int temp2=abs(target-v[loc]);
       cout<<min(temp1,temp2);
        //cout<<v[loc-1]<<" "<<v[loc];
    }

}
