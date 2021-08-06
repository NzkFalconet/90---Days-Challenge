#include<bits/stdc++.h>
using namespace std;
int main()
{

vector<int> v={1,2,3,4,5};
auto it= v.begin();
while(it!=v.end())
{
    cout<<*it<<" ";
    it++;
}
cout<<endl;

    vector<pair<int,int>> v_p={{1,2},{2,3},{3,4},{4,5}};
    auto it1= v_p.begin();
    while(it1!=v_p.end())
    {
        cout<<it1->first<<" "<<it1->second<<endl;
        it1++;
    }

cout<<endl;

    vector<pair<int,int>> v_p1={{1,2},{2,3},{3,4},{4,5}};
    for(auto &value:v_p1)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }





}
