
#include<iostream>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int start=0;
    int end=n-1;
    if(arr[0]<arr[n-1])
    {
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(k==arr[mid])
        {
            cout<<mid;
            break;
        }
        else if(k<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    }
    else if(arr[0]==arr[n-1])
    {
        if(arr[i]==k)
        {
            cout<<i;

        }
    }
    else
    {
         while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(k==arr[mid])
        {
            cout<<mid;
            break;
        }
        else if(k<arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    }

}
