#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int x,y;
        cin>>x>>y;
        m.insert({x,y});
    }
    auto it= m.begin();
    while(it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;


    }
    auto itr= m.lower_bound(2);
       cout<<itr->first<<" "<<itr->second<<endl;
}
