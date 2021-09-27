#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    v.clear();
    int start;
    cin>>start;

    for(int i=0;i<n;++i)
    {
       v.push_back(start+2*i);

    }

        for(int i=0;i<v.size();++i)
    {
       cout<<v[i]<<" ";

    }

   int temp=v[0];
    for(int i=1;i<v.size();++i)
    {
        temp=temp^v[i];

    }
    cout<<"XOR is"<<temp;
}
