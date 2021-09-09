#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec{3,2,2,3};
    vec.erase(std::remove(vec.begin(), vec.end(), 3), vec.end());
    cout<<vec.size();
}
