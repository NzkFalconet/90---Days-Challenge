#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="is2 sentence4 This1 a3";
    str.insert(0," ");
    map<int,string>m;
    string sus="";
    vector<string>v;

    for(int i=0;i<str.size();++i)
    {
        if(!isdigit(str[i]))
        {
            sus=sus+str[i];

        }
        else
        {
            m[str[i]]=sus;
            sus.clear();
        }


    }
    string temp="";
    for(auto it=m.begin();it!=m.end();++it)
    {
        temp=temp+it->second;
    }
        temp.erase(temp. begin(),temp.begin()+1);
    cout<<temp;
}
