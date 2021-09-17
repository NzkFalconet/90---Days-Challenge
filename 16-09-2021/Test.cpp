#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>v{2,3,4,7,11};

  int k=5;

 int n=v.size();
        int temp=n+k;
        set<int>s;
        int res;





    for(int i=1;i<=temp;++i)
    {

       auto it = std::find (v.begin(), v.end(), 5);
    cout<<*it<<" ";
            if(*it==i)
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
