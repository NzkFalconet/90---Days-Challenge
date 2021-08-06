#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m)
{
      for(auto &p: m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
}
int main()
{
    map <int, string> m;
    m[100]="shaan";
    m[200]="Vatsal";
    m[300]="tanishk";
    m.insert({400,"ananay"});
  print(m);
}
