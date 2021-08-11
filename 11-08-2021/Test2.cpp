#include<bits/stdc++.h>
using namespace std;
int main()
{
        vector<vector<int>>v={{111,2},{3,4},{5,6},{7,8},{9,0}};
        vector<int>v1;
        int temp=accumulate(v[0].begin(),v[0].end(),0);
        cout<<"first element's sum is "<<temp<<endl;

        for(int i=0;i<v.size();++i)
        {
            int sum=0;
            for(int j=0;j<v[i].size();++j)
            {
                cout<<v[i][j]<<" ";
                sum=sum+v[i][j];

            }
            if(temp<=sum)
                {
                    v1.clear();
                  v1.push_back(sum);
                }

            cout<<"The sum is :"<<sum<<endl;
            cout<<endl;
        }
       for(auto val:v1)
       {
           cout<<val;
       }
}
