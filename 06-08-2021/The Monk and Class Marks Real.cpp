#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,multiset<string>>m;
    int N;
    cin>>N;
    for(int i=0;i<N;++i)
    {
        int marks;
        string str;
        cin>>str>>marks;

        m[marks].insert(str);
    }

    auto curr_it= --m.end();
    while(true)
    {
        auto &students=(*curr_it).second;
        int marks=(*curr_it).first;
        for(auto student:students)
        {
            cout<<student<<" "<<marks<<endl;
        }
        if(curr_it==m.begin())
        {
            break;
        }
        curr_it--;
    }

}
