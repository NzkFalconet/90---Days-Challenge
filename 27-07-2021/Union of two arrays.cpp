#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int arr[n];
    int brr[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int j=0;j<m;j++)
    {
        cin>>brr[j];
    }


    int crr[n+m];

        for(int i=0;i<n;i++)
        {
            crr[i]=arr[i];
        }
         for(int i=0;i<m;i++)
        {
            crr[i+n]=brr[i];
        }
          int count= n+m;

        sort(crr,crr+count);

        for(int i=1;i<n+m;i++)
        {
            if(crr[i]==crr[i-1])
            {
                count--;
            }
        }
       cout<<" the union of the array is"<<endl;
    for(int i=0;i<count;i++)
    {

        cout<<crr[i]<<" ";
    }
   /* cout<<"the array is"<<endl;
    for(int i=0;i<n+m;i++)
    {
        cout<<drr[i]<<" ";
    } */
    cout<<" the count is"<<count<<endl;

}
