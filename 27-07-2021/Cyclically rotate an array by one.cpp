
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int brr[n];
    brr[0]=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        brr[i+1]=arr[i];
    }
     brr[0]  = arr[n-1];
    cout<<"the array after swithcing one position is "<<endl;
    for(int i=0;i<n;i++)
    {
        arr[i]=brr[i];
      cout<<arr[i]<<" ";

    }

}
