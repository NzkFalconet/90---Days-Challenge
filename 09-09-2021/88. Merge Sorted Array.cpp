#include<bits/stdc++.h>
using namespace std;
int main()
{


    vector<int>num1{1,2,3,0,0,0};
    vector <int>num2{2,5,6};
     for(int i=0;i<num2.size();++i)
    {
        num1.pop_back();
    }
    for(int i=0;i<num2.size();++i)
    {
        num1.push_back(num2[i]);
    }
    sort(num1.begin(), num1.end());
    for(int i=0;i<num1.size();++i)
    {
        cout<<num1[i]<<" ";
    }


}
