#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l , int mid, int r)
{
    int n1=mid+1-l;
    int n2=r-mid;
    int a[n1];
    int b[n2];

    for(int i=0;i<n1;++i)
    {
        a[i]=arr[l+i];

    }
    for(int j=0;j<n2;++j)
    {
        b[j]=arr[mid+j+1];
    }
    int i=0;
    int j =0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
       arr[k]=a[i];
            k++;
            i++;

    }
    while(j<n2)
    {
          arr[k]=b[j];
            k++;
            j++;

    }
}


void mergeSort(int arr[], int l , int r)
{
    if(l<r)
    {
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int main()
{
    int arr[]={5,4,3,2,1,-10,-2,233,-33421,233};
    mergeSort(arr,0,9);
    for(int i=0;i<10;++i)
    {
        cout<<arr[i]<<" ";
    }
}
