#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{2,3,4};
     vector<int>temp;
    int target=6;
    int n=v.size();
   int l=0;
   int r=n-1;
   int m;
   while(l<=r)
   {
       if(v[l]+v[r]==target)
       {
            temp.push_back(l+1);
            temp.push_back(r+1);
            break;
       }
       else if(v[l]+v[r]>target)
       {
           r--;
       }
       else if(v[l]+v[r]<target)
       {
           l++;
       }

   }
   for(int i=0;i<temp.size();++i)
   {
       cout<<temp[i]<<" ";
   }
}
