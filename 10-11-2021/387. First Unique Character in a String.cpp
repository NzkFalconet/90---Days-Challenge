#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="aabb";
    unordered_map<char,int>m;
    for(int i=0;i<s.size();++i)
    {
            m[s[i]]++;
    }
    for(auto it:m)
    {
         cout<<it.first<<" "<<it.second<<endl;
    }


}
