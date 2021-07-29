

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];

    }
   sort(nums,nums+n);
    for(int i=1;i<n;i++)
    {
    if(nums[i]==nums[i-1])
    {
        cout<<nums[i];
    }

    }
}
