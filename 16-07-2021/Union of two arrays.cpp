#include<iostream>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;
    int arr[n],brr[m],crr[n+m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        crr[i]=arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
        crr[i+n]=brr[i];
    }
    cout<<"array is ";
    for(int i=0;i<n+m;i++)
    {
        cout<<crr[i];
    }

}
