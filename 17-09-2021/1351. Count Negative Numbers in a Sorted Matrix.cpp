class Solution {
public:
    int countNegatives(vector<vector<int>>& v) {

     int rows=v[0].size();
    int columns=v.size();
    int j=rows-1;
    int i=0;
        int res=0;
    while(i>=0 && i<=columns-1 && j>=0 && j<=rows-1)
    {
        if(v[i][j]<0)
        {

            res=res+(columns-i);
            j--;
        }
        else if(v[i][j]>-1)
        {
            i++;
        }

    }

    return res;
    }
};
