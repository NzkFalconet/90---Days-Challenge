#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>v{1,2,5,6};

  int k=2;

 int n=v.size();
        int temp=n+k;
        set<int>s;
        int res;
       for(int i=0;i<v.size();++i)
       {
           s.insert(v[i]);
       }
       cout<<"set is "<<endl;
       for(auto p:s)
       {

           cout<<p<<" ";
       }
       cout<<endl;
       int loc=s.size();

    cout<<"set size is " <<loc;
    cout<<endl;
    for(int i=1;i<=temp;++i)
    {

        auto it=s.find(i);

            if(*it==loc )
            {

                res=i;
                cout<<res<<" ";
                k=k-1;
            }

          if(k==0)
        {

           break;
        }
     }

     cout<<endl<<res<<" c ";
        return res;



}
