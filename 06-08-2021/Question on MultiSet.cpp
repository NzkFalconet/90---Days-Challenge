#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,k;
    cout<<"enter number of bags and total minutes respectively"<<endl;
    cin>>N>>k;
    multiset<long long>m ;
    cout<<"enter candies in each bags"<<endl;
    for(int i=0;i<N;i++)
    {
        long long n;
        cin>>n;
        m.insert(n);
    }
   /*for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<*i<<" "<<endl;
    }*/

   long long count=0;
    for(int i=0;i<k;++i)
    {
        auto it=m.end();
        long long ptr=*(--it);
        cout<<ptr<<endl;
        count=count+ptr;
        m.insert(ptr/2);
        auto it2=m.find(ptr);
        m.erase(it2);
    }
    cout<<"total candies the boy will eat "<<count<<endl;
}
