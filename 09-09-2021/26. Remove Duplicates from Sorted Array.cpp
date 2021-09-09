#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    vector<int>v{1,1,2};
    for(int i=0;i<v.size();++i)
    {
        s.insert(v[i]);
    }
    int count=0;
    for(auto p:s)
    {
        cout<<p<<" ";
        count++;
    }
    cout<<endl;
    cout<<count;

}
