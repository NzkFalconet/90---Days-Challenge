#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)

    {
        for(int j=0;j<i;j++)
            {
        if(arr[j]>=0 && arr[i]<0)
        {
            swap(arr[j],arr[i]);
        }

        }
    }
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
