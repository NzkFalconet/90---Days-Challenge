#include<bits/stdc++.h>
using namespace std;
int main()
{
   // map<int,int>m;

 /*   pair<string,int>p1;
    pair<string,int>p2;
    p1={"shan",11};
    p2={"shan",5};
    cout<<(p1>p2);*/
    map<pair<string,string>,vector<int>>m;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        string f_name,l_name;
        cin>>f_name>>l_name;
        int ct;
        cin>>ct;
        for(int j=0;j<ct;++j)
        {
            int x;
            cin>>x;
            m[{f_name,l_name}].push_back(x);
        }
    }
    for(auto &val : m)
    {
        auto full_name= val.first;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        auto &list= val.second;
        for(auto &p:list)
        {
            cout<<p<<" ";
        }
        cout<<endl;

    }

}
