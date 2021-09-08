#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<vector<int>> v{   {1, 2},
                                {3, 4},
                                {5, 6},
                                {7, 8}
                            };
        vector<int>temp;

     /*   for(int i=0;i<4;++i)
        {
            for(int j=0;j<2;++j)
            {
                int x;
                cin>>x;
                temp.push_back(x);
            }
            v.push_back(temp);
        }*/
        vector <int> vec;



        for(auto loc:v)
        {
              if(loc[0]>loc[1])
                vec.push_back(loc[1]);
               else
                vec.push_back(loc[0]);
        }
       for(int i=0;i<vec.size();++i)
        {
            cout<<vec[i]<<" ";
        }
        int max= *max_element (vec.begin(), vec.end());

            cout<<max;
      cout<<  count(vec.begin(), vec.end(),max);
}
