#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int l , int h)
{
    int pivot= arr[l];
    int i=l;
    int j=h;
    while(i<j)
    {


        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j)
        {
            swap(arr[i],arr[j]);

        }

    }
    swap(arr[l],arr[j]);
    return j;

}


void QuickSort(int arr[], int l, int h)
{
    int j;
    if(l<h)
    {
        j=partition(arr,l,h);
        QuickSort(arr,l,j);
        QuickSort(arr,j+1,h);
    }
}


int main()
{
    int arr[]={-10,-16,8,12,15,6,3,-9,5,INT_MAX};
    QuickSort(arr,0,9);
    for(int i=0;i<9 ;++i)
    {
        cout<<arr[i]<<" ";
    }
}



