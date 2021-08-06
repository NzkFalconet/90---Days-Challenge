#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    int N;
    cout<<"enter number of string"<<endl;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    cout<<"enter Number of Queries"<<endl;
    int Q;
    cin>>Q;
    cout<<"enter Queries"<<endl;
    for(int i=0;i<Q;i++)
    {
        string str2;
        cin>>str2;
        auto it = s.find(str2);
        if(it!=s.end())
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
