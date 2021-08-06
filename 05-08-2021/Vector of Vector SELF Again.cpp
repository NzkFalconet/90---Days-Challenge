#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<endl;
    }
    cout<<endl;
}


int main()
{
    vector<vector<int>>v;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cout<<"enter size of vectors"<<endl;
        int n;
        cin>>n;
        cout<<"enter elements of vector"<<endl;
    vector<int>temp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for(int i=0;i<N;i++)
    {
        printVec(v[i]);
    }
}
