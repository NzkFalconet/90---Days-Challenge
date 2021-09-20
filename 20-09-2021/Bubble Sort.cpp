#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{2,-7,-4,0,0,1,-3};
    int n=v.size();
    int temp;
    int swap;
    for(int i=0;i<v.size()-1;i++)
    {
        swap=0;
        for(int j=0;j<v.size()-i-1;++j)
        {
            if(v[j]>v[j+1])
            {
                temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                swap=1;
            }
        }
        if(swap==0)
        {
            cout<<"every element is sorted ";
            break;
        }
    }
     for(int i=0;i<n;++i)
    {
        cout<<v[i]<<" ";
    }
}
