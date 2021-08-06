#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m1[s]=m1[s]+1;
    }

    for(auto p:m1)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
}
