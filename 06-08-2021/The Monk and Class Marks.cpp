#include<bits/stdc++.h>
using namespace std;
void print(map<string,multiset<int>> &s)
{
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<it->second<<" "<<it->first<<endl;
    }
}

int main()
{


        map<string ,multiset<int>>s;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int marks;
            marks=marks*-1;
            string str;
            cin>>str>>marks;
            marks=marks*-1;
            s.[str].insert(marks);

        }
      print(s);



}
