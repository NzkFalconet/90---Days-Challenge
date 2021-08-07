#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={15,30,40,80,200,700,927,1000,1410,1567};
    int r=sizeof(arr)/sizeof(arr[0]);
    int l=0;
    int value=5;
    int count=0;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(arr[m]==value){
        cout<<"element found"<<endl;
        count=1;
        break;}
        else if(arr[m]>value)
        {
            r=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    if(count==0)
    {
        cout<<"element not found"<<endl;
    }

}
