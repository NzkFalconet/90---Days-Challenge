#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{7,7,7,7,7,7,7};
    map<int,int>m;
    for(int i=0;i<v.size();++i)
    {
        m[v[i]]++;
    }
    int count=0;
    for(auto it=m.rbegin();it!=m.rend();++it)
    {
        if(it->first == it->second)
        {
            cout<<it->first;
            count++;
            break;
        }

    }
    if(count==0)
    {
        cout<<-1;
    }

}
