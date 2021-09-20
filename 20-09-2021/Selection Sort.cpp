#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{2,-7,-4,5,1,-3};
    int n=v.size();
    int loc;
    int j;
    int temp;
    for(int i=0;i<n-1;++i)
    {
        int min=v[i];
        loc=i;
        for(j=i+1;j<n;++j)
        {
            if(v[j]<min)
            {
                min=v[j];
                loc=j;
            }
        }
        temp=v[i];
        v[i]=v[loc];
        v[loc]=temp;

    }
    for(int i=0;i<n;++i)
    {
        cout<<v[i]<<" ";
    }
}
