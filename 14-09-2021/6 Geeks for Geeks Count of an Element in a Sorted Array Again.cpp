#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,2,2,2,2,2,4};

    int n=v.size();
    auto it1= lower_bound(v.begin(),v.end(),3);
    auto it2= upper_bound(it1,v.end(),3);
    cout<<it1-v.begin()+1;
    cout<<" "<<it2-v.begin()+1;
    cout<<" "<<it2-it1;
}
