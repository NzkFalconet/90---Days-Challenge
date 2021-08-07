#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {

        int n;
        cin>>n;
        multiset <int>n1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            n1.insert(x);
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int y;
            cin>>y;
            int count=n1.count(y);
          while(count>0)
          {
              cout<<y<<" ";
              count--;
          }
          n1.erase(y);
        }
        for(auto it:n1)
        {
            cout<<it<<" ";
        }
        cout<<endl;







        t--;
    }
}
