#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s)
{
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        set<string>s;
        int N;
        cin>>>N;
        for(int i=0;i<N;i++)
        {
            string str;
            cin>>str;
            s.insert(str);
        }
      print(s);




        t--;
    }
}
