#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,5,2,4,1};
    int count=0;
    for(int i=0;i<v.size()-1;++i)
    {


            if(v[i+1]<=v[i])
            {

                count=count+(v[i]-v[i+1]+1);
                v[i+1]=v[i]+1;

            }

    }
    cout<<count;
}
