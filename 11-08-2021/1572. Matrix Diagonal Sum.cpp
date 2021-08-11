#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>mat= {{1,1,1,1},
                             {1,1,1,1},
                             {1,1,1,1},
                             {1,1,1,1}};
                 int sum=0;
              for(int i=0;i<mat.size();++i)
              {
                  int j=i;
                    cout<<mat[i][j]<<" ";
                  sum=sum+mat[i][j];
              }
              cout<<endl;
               for(int i=0;i<mat.size();++i)
              {
                   int k=mat.size()-i-1;
                   int l=mat.size()/2;
                  if(i!=k)
                  {

                  sum=sum+mat[i][k];
                    cout<<mat[i][k]<<" ";
                  }



              }
            //  cout<<sum;
}
