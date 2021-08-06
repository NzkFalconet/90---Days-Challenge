#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v={1,2,3,4};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"now using iterators--"<<endl;
    vector<int>:: iterator it = v.begin();
    while(it!=v.end())
    {
        cout<<*it<<endl;
        it++;
    }
    map<int , string> m1;
    m1[100]="shaan";
    m1[200]="tanishk";
    m1[300]="ananay";
        cout<<"MAP -----> using iterators--"<<endl;
    map<int,string>:: iterator p= m1.begin();
    while(p!=m1.end())
    {
        cout<<p->second<<endl;
        p++;
    }

        cout<<"pair in vector -----> using iterators--"<<endl;
        vector<pair<int,int>>v_p={{1,2},{3,4},{5,6},{7,8}};
        vector<pair<int,int>>:: iterator q=v_p.begin();
        while(q!=v_p.end())
        {
            cout<<q->first<<" "<<q->second<<endl;
            q++;
        }

}
