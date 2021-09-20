#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{2,-7,-4,0,0,1,-3};
    int n=v.size();
    int hole,value;
    for(int i=1;i<v.size();++i)
    {
        hole=i;
        value=v[i];
        while(hole>0 && v[hole-1]>value)
        {
            v[hole]=v[hole-1];
            hole--;
        }
        v[hole]=value;
    }
         for(int i=0;i<n;++i)
    {
        cout<<v[i]<<" ";
    }
}
