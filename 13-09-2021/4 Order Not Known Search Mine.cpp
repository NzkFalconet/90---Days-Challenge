#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v,int target)
{
     int start=0;
    int end=v.size()-1;
    int mid;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(v[mid]==target)
           {
               return mid;
           }

        else if(v[mid]<target)
        {
            start=mid+1;
        }
        else if(v[mid]>target)
        {
            end=mid-1;
        }
    }
    return -1;
}

int binarySearchReverse(vector<int> &v,int target)
{
     int start=0;
    int end=v.size()-1;
    int mid;

     while(start<=end)
     {
         mid=start+ (end-mid)/2;
         if(v[mid]==target)
         {

             return mid;
         }
         else if(v[mid]>target)
         {
             start=mid+1;
         }
         else if(v[mid]<target){
            end=mid-1;
         }
     }
    return -1;
}

int singleElem(vector<int> &v,int target)
{

    if(target==v[0])
    {
        return 0;
    }
    else
    {
       return -1;
    }
}

int TwoElem(vector<int> &v,int target)
{

    if(v[0]==v[1] && target==v[0])
    {
        return 0;
    }
    else if(v[0]==v[1] && target!=v[0])
    {
        return -1;
    }
    else if(v[1]>v[0])
    {
        return binarySearch(v,target);
    }
    else
    {
         return binarySearchReverse(v,target);
    }
}

int ThreeElemSame(vector<int> &v,int target)
{
    int n=v.size();
    if(v[0]==v[n-1] && target==v[0])
    {
        return 0;
    }
    else if(v[0]==v[n-1] && target!=v[0])
    {
        return -1;
    }

}

int main()
{

      vector<int>v{4,3,2,1};
       int target=1;
       int n=v.size();
       if(n==1)
       {
           cout<<singleElem(v,target);
       }
       else if(n==2)
       {
          cout<< TwoElem(v,target);
       }
       else if(n>2)
       {
           if(v[0]==v[n-1])
           {
              cout<< ThreeElemSame(v,target);
           }
           else
           {
               if(v[0]<v[n-1])
               {
                   cout<<binarySearch(v,target);
               }
               else
               {
                   cout<<binarySearchReverse(v,target);
               }
           }
       }







}



