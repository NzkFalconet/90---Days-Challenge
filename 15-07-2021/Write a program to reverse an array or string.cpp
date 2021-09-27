#include<iostream>
using namespace std;

void reverse_Array(int x)
{
    int arr[x];
    for (int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int temp;
   int start = 0;
   int end = x-1;

   while(start<end)
   {
       temp = arr[start];
       arr[start]= arr[end];
       arr[end]= temp;
       end--;
       start++;
   }
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<endl;
    }
}





int main(){
    int n;
    cin>>n;
    reverse_Array(n);

}







/*
void reverse_Array(int x){
    int arr[x];
    int brr[x];
    cout<<"enter array's elements!"<<endl;
    for (int i=0;i<x;i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];

    }

    for(int i=0;i<x;i++)
    {
        arr[i]=brr[x-i-1];
    }
       for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<endl;

    }

}
*/
