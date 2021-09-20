#include<bits/stdc++.h>
using namespace std;


 vector<int> mergeThem(vector<int> &v, int l, int mid, int r)
 {
     int i=l;
     int j=mid+1;
     int k=l;
     vector<int>vec;
     while(i<=mid && j<=r)
     {
         if(v[i]<v[j])
         {
            vec[k]=v[i];
            i++;
         }
         else
         {
             vec[k]=v[j];
             j++;

         }
         k++;
        if(i>mid)
        {
            while(j<=r)
            {
                vec[k]=v[j];
                k++;
                j++;
            }
        }
        else
        {
            while(i<=mid)
            {
                vec[k]=v[i];
                i++;
                k++;
            }
        }
     }
      for(int k=l;k<=r;++k)
     {
         v[k]=vec[k];
     }
     return vec;

 }

 void mergeSort(vector<int> &v, int l, int r)
 {
     if(l<r)
     {
         int mid=(l+r)/2;
         mergeSort(v,l,mid);
         mergeSort(v,mid+1,r);
         mergeThem(v,l,mid,r);
     }
     for(int i=0;i<v.size();++i)
     {
         cout<<v[i]<<" ";
     }
 }

int main()
{
    vector<int> v{9,4,7,6,3,1,5};
    int n=v.size();
   mergeSort(v,0,n-1);

}
