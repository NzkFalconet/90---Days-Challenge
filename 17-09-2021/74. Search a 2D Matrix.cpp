#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<v.size()<<" "<<v[0].size();
   /* for(int i=0;i<v.size();++i)
    {
        for(int j=0;j<v[i].size();++j)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;

    }*/
    cout<<endl;
    int target=13;
     int rows=v[0].size();
    int columns=v.size();
    int j=rows-1;
    int i=0;
    while(i>=0 && j>=0)
    {
        if(v[i][j]==target)
        {
            cout<<"target found at "<<j<<" "<<" row and "<<i<<" column ";
            return 11;
        }
        else if(v[i][j]>target)
        {
            j--;
        }
        else if(v[i][j]<target)
        {
            i++;
        }
    }
    cout<<"not found";
    return -1;



}
