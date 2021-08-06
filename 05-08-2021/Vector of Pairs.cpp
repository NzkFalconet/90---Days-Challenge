#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>>v)
{   cout<<"the size of vector is: "<<v.size()<<endl;;
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main()
{
    //vector<pair<int,int>>v={{1,2},{3,4},{4,5}};
    vector <pair<int,int>>v1;
    printVec(v1);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v1.push_back({x,y});
    }
    printVec(v1);

}
