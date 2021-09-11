#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,3,5,6};
    int target=4;
    int pos=0;
    int n=v.size()-1;
    if(target==0)
    {
        cout<<0;
    }
    else if(target>v[n])
    {
        cout<<n+1;
    }
    else
    {
        for(int i=0;i<v.size();++i)
        {
            if(target==v[i])
            {
                pos=i;
                cout<<pos;
                break;
            }
            else if(target>v[i] && target<v[i+1])
            {
                pos=i+1;
                cout<<pos;
                break;
            }
        }
    }
}
