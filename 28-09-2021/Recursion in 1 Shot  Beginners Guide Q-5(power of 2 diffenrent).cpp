#include<bits/stdc++.h>
using namespace std;

int Power(int n)
{
    if(n==0)
    {
        return 1;
    }
    int chotta_answer=Power(n/2);
    //odd
    if(n&1)
    {
        return 2*chotta_answer*chotta_answer;
    }
    else
    {
        return chotta_answer*chotta_answer;
    }
}
int main()
{
    int n;
   // cin>>n;
    cout<<Power(6);
}
