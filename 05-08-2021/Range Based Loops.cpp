#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v={1,2,3,4,5};
    cout<<"by using simple for loop"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"by using Range Based for loop"<<endl;
    for(int &value : v)
    {
       value++;

    }
    for(int value : v)
    {
        cout<<value<<" ";

    }
    cout<<endl;
    cout<<"Range based For loop in vector : "<<endl;
    vector<pair<int,int>> v_p={{1,2},{2,3},{3,4},{4,5}};
    for(pair<int,int> &value:v_p)
    {
        cout<<value.first<<" ";
        cout<<value.second<<" ";
        cout<<endl;
    }
}
