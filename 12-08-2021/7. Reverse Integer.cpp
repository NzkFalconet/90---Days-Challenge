#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=123;
    for(int i=x;i>0;i=i/10)
    {
        cout<<i%10;
    }
}
