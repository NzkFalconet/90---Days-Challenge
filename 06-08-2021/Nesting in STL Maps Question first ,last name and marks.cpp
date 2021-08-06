#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin>>Q;
    map<pair<string,string>,vector<int>>m;
    for(int i=0;i<Q;i++)
    {

        string fname,lname;
        cin>>fname>>lname;
        int N;
        cin>>N;

        for(int i=0;i<N;i++)
        {
            int x;
            cin>>x;
            m[{fname,lname}].push_back(x);

        }
    }

    for(auto &val:m)
    {
        auto fname= val.first;
        cout<<fname.first<<" "<<fname.second<<endl;
        auto &list = val.second;
        for(auto &val2:list)
        {
            cout<<val2<<" ";
        }
        cout<<endl;
    }
}
