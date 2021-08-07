#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,5};
    cout<<all_of(v.begin(),v.end(),
                 [](int x){return x>=2;})<<endl;
    cout<<any_of(v.begin(),v.end(),
                [](int x){return x>=4;})<<endl;
}









































  // cout<< [](int x,int y){return x+y;}(2,10);
  //auto sum = [](int x,int y){return x+y;};
  //cout<<sum(2,4);
