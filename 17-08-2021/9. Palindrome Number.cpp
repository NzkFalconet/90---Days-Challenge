#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=10;
    if(x>0)
    {
         vector<int>v;
    for(int i=x;i>0;i/=10)
    {
        v.push_back(i%10);
    }
    int count=0;
    for(int i=0;i<v.size();++i)
    {
        int temp= v.size()-1-i;
        if(i<=temp)
        {
            if(v[i]!=v[temp])
            {
                count=1;
            }
        }
    }
    if(count==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    }
    else
    {
        cout<<"No"<<endl;
    }

}
