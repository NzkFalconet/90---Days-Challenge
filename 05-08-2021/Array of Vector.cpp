#include<bits/stdc++.h>
using namespace std;


void printVec(vector<int>&v)
{   cout<<"the size of vector is: "<<v.size()<<endl;
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    int N;
    cout<<"input how many arrays you want:"<<endl;
    cin>>N;

    vector<int> v[N];
    for(int i=0;i<N;i++)
    {
        int n;
        cout<<"enter array's size:"<<endl;
        cin>>n;
        cout<<"enter elements in array of vector:"<<endl;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }

    }
    for(int i=0;i<N;i++)
    {
        printVec(v[i]);
    }
    cout<<v[0][1];

}
