class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
            int sum=0;
              for(int i=0;i<mat.size();++i)
              {

                  sum=sum+mat[i][i];
              }
              cout<<endl;
               for(int i=0;i<mat.size();++i)
              {
                   int k=mat.size()-i-1;
                   int l=mat.size()/2;
                  if(i!=k)
                  {

                  sum=sum+mat[i][k];

                  }

              }
        return sum;
    }
};
