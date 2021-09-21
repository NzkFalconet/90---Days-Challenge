#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>v{
        {1,3},
        {2,2},
        {3,1}
        };
        map<int,int>m;

        for(int i=0;i<v.size();++i)
        {
            for(int j=1;j>0;j--)
            {
                m[v[i][j]]=v[i][j-1];
            }
        }
        int sum=0;

        int size=4;

             for(auto it=m.rbegin();it!=m.rend();++it)
            {
            int key=it->first;
            int value=it->second;
            if(size-value>=0)
            {
                sum=key*value+sum;
                cout<<sum<<" ";
                size=size-value;
            }
            else
            {

                sum=sum+size*key;
                cout<<endl;

                break;
            }

            }


        cout<<sum;




}
