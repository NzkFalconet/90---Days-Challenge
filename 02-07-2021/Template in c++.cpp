#include<iostream>
using namespace std;
template <class X, class Y>
X greatNumber(X a, Y b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout<<greatNumber(4,5.2)<<endl;
     cout<<greatNumber(4.9,5.8)<<endl;;
}
