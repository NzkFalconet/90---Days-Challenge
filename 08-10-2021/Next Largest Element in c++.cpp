#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>v{1,3,2,4};
    for(int i=0;i<v.size();++i)
    {
         stack<int>s;
        int loc=v[i];
        for(int j=v.size()-1;j>i;--j)
        {
            s.push(v[j]);
        }
        while(!s.empty())
        {
            int temp=s.top();
            s.pop();
            if(loc<temp)
            {
                v[i]=temp;
                break;

            }
        }
        if(loc==v[i])
        {
            v[i]=-1;
        }
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }
}
