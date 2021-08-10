#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>v={1,2,3,4,5};
    cout<<accumulate(v.begin(),v.end(),0);
}
