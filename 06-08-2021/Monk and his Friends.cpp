#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {

        int N,M;
        cin>>N>>M;
        map<long long ,int>m;

         for(int i=0;i<N;i++)
        {
            long long candies;
            cin>>candies;
            m[candies]=i;
        }
    /* for(auto it=m.begin();it!=m.end();++it)
            {
                cout<<it->first<<" "<<it->second<<endl;
            }
*/
       for(int i=0;i<M;i++)
        {
            long long new_candies;
                cin>>new_candies;
            auto it = m.find(new_candies);
            if(it==m.end())
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }

        }















        t--;
    }
}
