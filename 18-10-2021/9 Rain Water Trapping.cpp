#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{3,0,0,2,0,4};
    vector<int>v1=v;
     vector<int>v2=v;


    for(int i=1;i<v.size();++i)
    {
        v1[i]=max(v1[i-1],v[i]);

    }

     for(int i=v.size()-2;i>0;--i)
    {
        v2[i]=max(v2[i+1],v[i]);

    }
    vector<int>res;
    for(int i=0;i<v1.size();++i)
    {
        int loc= min(v1[i],v2[i])-v[i];
        res.push_back(loc);
    }
    cout<<accumulate(res.begin(),res.end(),0);

}
