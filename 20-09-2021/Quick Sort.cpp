#include<bits/stdc++.h>
using namespace std;

int partition(int a[] , int l , int h)
{
    int pivot= a[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        do{i++;}
        while(a[i]<=pivot);
        do{j--;}
        while(a[j]>pivot);
            if(i<j)
        {
            swap(a[i],a[j]);
        }

    }
    swap(a[l],a[j]);
    return j;
}

void quickSort( int a[], int l , int h)
{
    int j;
    if(l<h)
    {
         j=partition(a,l,h);
            quickSort(a,l,j);
    quickSort(a,j+1,h);
    }

}
int main()
{
    int a[]={-10,-16,8,12,15,6,3,-9,5,INT_MAX};
    quickSort(a,0,9);
    for(int i=0;i<9 ;++i)
    {
        cout<<a[i]<<" ";
    }
}
