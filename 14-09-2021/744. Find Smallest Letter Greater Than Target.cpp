#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>v{'c','f','j'};
     int n=v.size();

        int start=0;
        int end=n-1;
        int mid;
        int target='d';
          if(v[0]>target)
        {cout<<v[0]<<" a";
        return 1;}
        if(v[0]==target)
        {cout<<v[1]<<" b";
        return 1;}
        if(v[n-1]<=target)
        {cout<<v[0]<<" c";
        return 1;}
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(v[mid]==target)
            {
                cout<<v[mid+1]<<" d";
                return 1;
            }
            else if(target<v[mid])
            {end=mid-1;}
            else
            {start=mid+1;}
        }
        cout<< v[mid]<<" e";
    }


