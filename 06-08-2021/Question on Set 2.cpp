#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin>>Q;
    set<long long>m;
    for(int i=0;i<Q;i++)
    {
        int y;
        long long x;
        cin>>y>>x;

        if(y==1)
        {
            m.insert(x);
        }
        else if(y==2)
        {
            m.erase(x);
        }
        else if(y==3)
        {
            auto it = m.find(x);
            if(it==m.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }



    }
}
