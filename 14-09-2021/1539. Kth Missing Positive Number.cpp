#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{2,3,4,7,11};
    int k=5;
    vector<int>vec;
    int i=1;
    while(k>0)
    {
        if(i!=v[i-1])
        {
            vec.push_back(i);

            k--;
        }
        else
        {
            vec.push_back(i);
            i++;
        }
    }
    for(int i=0;i<vec.size();++i)
    {
        cout<<vec[i]<<" ";
    }
}
