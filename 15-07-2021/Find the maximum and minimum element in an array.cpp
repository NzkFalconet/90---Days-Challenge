#include<iostream>
#include <bits/stdc++.h>
using namespace std;


void max_Element(int n)
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int temp1 = arr[0];
    int pos=0;
    int temp2= arr[0];
        for(int i=1 ;i<n;i++)
    {
        if(temp1<arr[i])
        {
           temp1 =  arr[i];

        }
        if(temp2>arr[i])
        {
            temp2 = arr[i];
             pos= i;
        }

    }
      cout<<"minimum element is "<<temp2<<" index is "<<pos<<endl;
    cout<<"maximum element is "<<temp1<<endl;
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
        max_Element(n);
        t--;
    }
}
