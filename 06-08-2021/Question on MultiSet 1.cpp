#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,k;

    cin>>N>>k;
    multiset<long long>m ;

    for(int i=0;i<N;i++)
    {
        long long n;
        cin>>n;
        m.insert(n);
    }


   long long count=0;
    for(int i=0;i<k;++i)
    {
        auto it=m.end();
        long long ptr=*(--it);

        count=count+ptr;
        m.insert(ptr/2);
        auto it2=m.find(ptr);
        m.erase(it2);
    }
    cout<<count<<endl;
}
