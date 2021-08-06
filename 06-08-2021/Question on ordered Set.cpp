//Question -
//Given N strings, print unique strings in lexiographical order
#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for(auto p:s)
    {
        cout<<p<<" " ;
    }
}
int main()
{
    int N;
    cin>>N;
    set<string> s;
    for(int i=0;i<N;i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    print(s);
}
