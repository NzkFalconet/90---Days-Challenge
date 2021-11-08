#include<bits/stdc++.h>
using namespace std;

vector<int>maxR(vector<int>&v)
{
    vector<int>vec=v;


    for(int i=v.size()-2;i>=0;--i)
    {
       vec[i]=( max(vec[i+1],v[i]) );
    }
    return vec;
}

vector<int>maxL(vector<int>&v)
{
    vector<int>vec;

    vec.push_back(v[0]);
    for(int i=1;i<v.size();++i)
    {
       vec.push_back( max(vec[i-1],v[i]) );
    }
    return vec;
}

int main()
{
    vector<int>v{3,0,0,2,0,4};
    vector<int>v1=maxR(v);
    vector<int>v2=maxL(v);

    for(int i=0;i<v.size();++i)
    {
        v[i]=min(v1[i],v2[i])-v[i];
    }
    int sum=0;
    for(auto it:v)
    {
        sum=sum+it;
        cout<<it<<" ";
    }
    cout<<sum;

}
