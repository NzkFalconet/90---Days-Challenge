#include<bits/stdc++.h>
using namespace std;

bool Sorted(vector<int>&v, int index)
{
    if(index>=v.size())
    {
        return 1;
    }
    if(v[index]<v[index-1])
    {
        return 0;
    }
    return Sorted(v, index+1);
}


int main()
{
    vector<int>v{1,2,3,42,5};
    int index=1;
    int n=Sorted(v,index);
    if(n==1)
    {
        cout<<"Sorted"<<endl;
    }
    else
    {
        cout<<"Unsorted"<<endl;
    }
}
