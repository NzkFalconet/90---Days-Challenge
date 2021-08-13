#include<bits/stdc++.h>
using namespace std;
int main()
{
    string jewels="aA";
    string stones= "aAAbbbb";
    int count=0;
     for(int i=0;i<stones.size();++i)
     {
       auto it=jewels.find( stones[i]);
        if(it<jewels.size())
        {
            count++;
        }
     }
     cout<<count;
}

