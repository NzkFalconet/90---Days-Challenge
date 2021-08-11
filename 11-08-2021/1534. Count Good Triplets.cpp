#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={3,0,1,1,9,7};
    int a=7,b=2,c=3;
    int count=0;
    vector<vector<int>>v;
    vector<int>temp;
    for(int i=0;i<arr.size();++i)
    {
        for(int j=i+1;j<arr.size()-1;++j)
        {
           if(abs(arr[i]-arr[j])<=a &&  abs(arr[j]-arr[j+1])<=b && abs(arr[i]-arr[j+1])<=c)
           {
                temp.clear();
               temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                 temp.push_back(arr[j+1]);
               v.push_back(temp);
           }
        }
    }
    for(int i=0;i<v.size();++i)
    {
        for(int j=0;j<v[i].size();++j)
        {
            cout<<v[i][j];

        }

        cout<<endl;
    }
    cout<<v.size();

}
