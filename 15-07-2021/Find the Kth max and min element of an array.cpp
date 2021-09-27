#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void sorted_Array(int n,int k)
{
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp,min,loc;
    for(int i=0;i<n-1;i++)
    {
        int min = arr[i];
        int loc=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
           {
              min = arr[j];
              loc = j;
           }


        }
        temp = arr[i];
        arr[i] = arr[loc];
        arr[loc]= temp;

    }
    cout<<endl;

   // for(int i=0;i<n;i++){cout<<arr[i]<<endl;}
    cout<<"Kth smallest element is "<<arr[k-1]<<endl;
    cout<<"Kth maximum element is "<<arr[n-k]<<endl;

}




int main(){
    int t;
    cout<<"enter test cases"<<endl;
    cin>>t;
    while(t>0)
    {
        int n;
        cout<<"enter number of element"<<endl;
        cin>>n;
        cout<<"enter K"<<endl;
        int k;
       cin>>k;
        sorted_Array(n,k);
        t--;
    }
}
